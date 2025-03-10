#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_LINE_LENGTH 1024
#define MAX_PHRASE_COUNT 100

// Fonction pour calculer la distance de Levenshtein
int levenshtein(const char *s1, const char *s2) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    int matrix[len1 + 1][len2 + 1];

    // Initialisation de la matrice
    for (int i = 0; i <= len1; i++) matrix[i][0] = i;
    for (int j = 0; j <= len2; j++) matrix[0][j] = j;

    // Remplissage de la matrice
    for (int i = 1; i <= len1; i++) {
        for (int j = 1; j <= len2; j++) {
            int cost = (s1[i - 1] == s2[j - 1]) ? 0 : 1;
            matrix[i][j] = fmin(fmin(matrix[i - 1][j] + 1, matrix[i][j - 1] + 1), matrix[i - 1][j - 1] + cost);
        }
    }

    return matrix[len1][len2];
}

// Fonction pour lire le fichier CSV et stocker les phrases
void read_csv(const char *filename, char phrases[MAX_PHRASE_COUNT][MAX_LINE_LENGTH], int *count) {
    FILE *file = fopen(filename, "r");
    if (!file) {
        perror("Erreur lors de l'ouverture du fichier CSV");
        exit(EXIT_FAILURE);
    }

    char line[MAX_LINE_LENGTH];
    *count = 0;

    while (fgets(line, sizeof(line), file)) {
        // Enlever le saut de ligne à la fin de la ligne
        line[strcspn(line, "\n")] = 0;
        strncpy(phrases[*count], line, MAX_LINE_LENGTH);
        (*count)++;
    }

    fclose(file);
}

// Fonction principale pour comparer la phrase et le fichier
void find_most_similar(const char *input_phrase, const char *csv_file) {
    char phrases[MAX_PHRASE_COUNT][MAX_LINE_LENGTH];
    int phrase_count;

    // Lire les phrases depuis le fichier CSV
    read_csv(csv_file, phrases, &phrase_count);

    int min_distance = MAX_LINE_LENGTH;  // Initialisation à une valeur élevée
    int best_match_index = -1;

    // Comparer la phrase d'entrée avec chaque phrase du CSV
    for (int i = 0; i < phrase_count; i++) {
        int distance = levenshtein(input_phrase, phrases[i]);
        if (distance < min_distance) {
            min_distance = distance;
            best_match_index = i;
        }
    }

    if (best_match_index != -1) {
        printf("La phrase la plus similaire est :\n\"%s\"\n", phrases[best_match_index]);
        printf("Score de similarité : %d\n", min_distance);
    } else {
        printf("Aucune correspondance trouvée.\n");
    }
}

int main() {
    char input_phrase[MAX_LINE_LENGTH];

    // Demander à l'utilisateur de saisir une phrase
    printf("Entrez une phrase : ");
    fgets(input_phrase, MAX_LINE_LENGTH, stdin);
    input_phrase[strcspn(input_phrase, "\n")] = 0;  // Enlever le saut de ligne

    // Appeler la fonction pour trouver la phrase la plus similaire
    find_most_similar(input_phrase, "data.csv");

    return 0;
}
