#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX_WORDS 1000
#define MAX_WORD_LEN 50
#define MAX_MESSAGES 531
#define MAX_LINE_LEN 1000

typedef struct {
    char word[MAX_WORD_LEN];
    int count;
} WordCount;

typedef struct {
    char message[MAX_MESSAGES][MAX_WORD_LEN * 10]; // Allow longer messages
    int label[MAX_MESSAGES];
    int size;
} Dataset;

typedef struct {
    WordCount tf_suspicious[MAX_WORDS];
    WordCount tf_neutral[MAX_WORDS];
    int suspicious_words;
    int neutral_words;
    int suspicious_terms;
    int neutral_terms;
    int total_terms;
} TFIDFClassifier;

void process_message(const char *message, char processed_message[MAX_WORDS][MAX_WORD_LEN], int *word_count) {
    char copy[MAX_WORD_LEN * 10];
    strcpy(copy, message);
    *word_count = 0;

    char *token = strtok(copy, " ");
    while (token != NULL) {
        if (strlen(token) > 2) {
            strcpy(processed_message[(*word_count)++], token);
        }
        token = strtok(NULL, " ");
    }
}

void calc_TF_and_IDF(TFIDFClassifier *classifier, Dataset *trainData) {
    classifier->suspicious_words = 0;
    classifier->neutral_words = 0;
    classifier->suspicious_terms = 0;
    classifier->neutral_terms = 0;
    classifier->total_terms = trainData->size;

    for (int i = 0; i < trainData->size; i++) {
        char processed_message[MAX_WORDS][MAX_WORD_LEN];
        int word_count;
        process_message(trainData->message[i], processed_message, &word_count);

        for (int j = 0; j < word_count; j++) {
            if (trainData->label[i]) {
                classifier->suspicious_words++;
                for (int k = 0; k < MAX_WORDS; k++) {
                    if (strcmp(classifier->tf_suspicious[k].word, processed_message[j]) == 0) {
                        classifier->tf_suspicious[k].count++;
                        break;
                    }
                    if (classifier->tf_suspicious[k].word[0] == '\0') {
                        strcpy(classifier->tf_suspicious[k].word, processed_message[j]);
                        classifier->tf_suspicious[k].count = 1;
                        break;
                    }
                }
            } else {
                classifier->neutral_words++;
                for (int k = 0; k < MAX_WORDS; k++) {
                    if (strcmp(classifier->tf_neutral[k].word, processed_message[j]) == 0) {
                        classifier->tf_neutral[k].count++;
                        break;
                    }
                    if (classifier->tf_neutral[k].word[0] == '\0') {
                        strcpy(classifier->tf_neutral[k].word, processed_message[j]);
                        classifier->tf_neutral[k].count = 1;
                        break;
                    }
                }
            }
        }
    }
}

int classify(TFIDFClassifier *classifier, char processed_message[MAX_WORDS][MAX_WORD_LEN], int word_count) {
    double pSpam = 0, pHam = 0;

    for (int i = 0; i < word_count; i++) {
        for (int j = 0; j < MAX_WORDS; j++) {
            if (strcmp(classifier->tf_suspicious[j].word, processed_message[i]) == 0) {
                pSpam += log((double)classifier->tf_suspicious[j].count / classifier->suspicious_words);
                break;
            }
        }
        for (int j = 0; j < MAX_WORDS; j++) {
            if (strcmp(classifier->tf_neutral[j].word, processed_message[i]) == 0) {
                pHam += log((double)classifier->tf_neutral[j].count / classifier->neutral_words);
                break;
            }
        }
    }

    return pSpam >= pHam;
}

void read_csv(const char *filename, Dataset *dataset) {
    FILE *file = fopen(filename, "r");
    if (!file) {
        perror("Failed to open file");
        exit(1);
    }

    char line[MAX_LINE_LEN];
    int index = 0;

    // Skip the header line
    fgets(line, sizeof(line), file);

    while (fgets(line, sizeof(line), file)) {
        // Remove newline character
        line[strcspn(line, "\n")] = '\0';

        // Parse the line
        char *v1 = strtok(line, ","); // Label
        char *v2 = strtok(NULL, ","); // Message

        if (v1 && v2) {
            // Remove quotes from v1 and v2
            if (v1[0] == '"') {
                memmove(v1, v1 + 1, strlen(v1)); // Remove opening quote
                v1[strlen(v1) - 1] = '\0';      // Remove closing quote
            }
            if (v2[0] == '"') {
                memmove(v2, v2 + 1, strlen(v2)); // Remove opening quote
                v2[strlen(v2) - 1] = '\0';      // Remove closing quote
            }

            // Map label to numerical value
            if (strcmp(v1, "neutral") == 0) {
                dataset->label[index] = 0;
            } else if (strcmp(v1, "suspicious") == 0) {
                dataset->label[index] = 1;
            } else {
                fprintf(stderr, "Unknown label: %s\n", v1);
                continue;
            }

            // Copy message
            strcpy(dataset->message[index], v2);
            printf("Read message: %s (label: %d)\n", dataset->message[index], dataset->label[index]);
            index++;
        }
    }

    dataset->size = index;
    fclose(file);
}

int main() {
    Dataset trainData;
    printf("Reading CSV file...\n");
    read_csv("data.csv", &trainData);

    TFIDFClassifier classifier;
    printf("Calculating TF and IDF...\n");
    calc_TF_and_IDF(&classifier, &trainData);

    // Test message
    char test_message[] = "Your use of our services indicates your acceptance of our terms and privacy policy, including the collection and processing of personal data as described in these documents. Non-compliance may lead to account suspension.";
    char processed_message[MAX_WORDS][MAX_WORD_LEN];
    int word_count;
    printf("Processing test message...\n");
    process_message(test_message, processed_message, &word_count);

    printf("Classifying test message...\n");
    int is_suspicious = classify(&classifier, processed_message, word_count);
    printf("Is suspicious: %d\n", is_suspicious);

    return 0;
}