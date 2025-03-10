from nltk.tokenize import word_tokenize
from nltk.corpus import stopwords
from nltk.stem import PorterStemmer
import nltk
import matplotlib.pyplot as plt
from wordcloud import WordCloud
from math import log
import pandas as pd
import numpy as np
import argparse
from PyPDF2 import PdfReader

nltk.download("punkt")
nltk.download("stopwords")


def main():
    #Set variables for pdf extraction outside the conditional scope to avoid disasters :D
    suspicious_lines = []
    sc_tf_idf = None
    #Result given by using the command without arguments.
    parser = argparse.ArgumentParser(description="ZoryaTrace - Trace AI generated content")
    parser.add_argument(
    "-f",
    "--file",
    type=str,
    help="path to the pdf file to be analyzed with the algorithm, and then return the lines deemed suspicious to the user in terms of confidentiality.",
    )
    parser.add_argument(
        "-c",
        "--classify",
        type=str,
        help="classify text given in inverted commas as suspect or neutral using TFxIDF algorithm",
    )
    parser.add_argument(
        "-t",
        "--test",
        action="store_true",
        help="train and test the algorithm on predefined data",
    )

    args = parser.parse_args()

    # Reads the data.csv file and transforms it into a Pandas DataFrame, sorting the columns.
    terms = pd.read_csv("data.csv", encoding="utf-8")
    terms.drop(["Unnamed: 2", "Unnamed: 3", "Unnamed: 4"], axis=1, inplace=True)
    terms.rename(columns={"v1": "labels", "v2": "message"}, inplace=True)
    print(terms["labels"].value_counts())
    terms["label"] = terms["labels"].map({"neutral": 0, "suspicious": 1})
    terms.drop(["labels"], axis=1, inplace=True)

    # Creation of the training set (75% of the data) and the test set (25% of the data).
    trainIndex, testIndex = list(), list()
    for i in range(terms.shape[0]):
        if np.random.uniform(0, 1) < 0.75:
            trainIndex += [i]
        else:
            testIndex += [i]
    trainData = terms.loc[trainIndex]
    testData = terms.loc[testIndex]

    # Reset of indexes in the training set and in the test set.
    trainData.reset_index(inplace=True)
    trainData.drop(["index"], axis=1, inplace=True)

    testData.reset_index(inplace=True)
    testData.drop(["index"], axis=1, inplace=True)

    # Processing the argument to test the algorithm on two predefined lines.
    if args.test:
        sc_tf_idf = TFIDFCLassifier(trainData)
        sc_tf_idf.train()
        preds_tf_idf = sc_tf_idf.predict(testData["message"])
        print()
        print("Results for TF x IDF classifier:")
        metrics(testData["label"], preds_tf_idf)

        sc_bow = BowClassifier(trainData)
        sc_bow.train()
        preds_bow = sc_bow.predict(testData["message"])
        print()
        print("Results for Bow classifier:")
        metrics(testData["label"], preds_bow)
        print()
        # Use of two predefined messages to test the algorithm.
        print("Testing:  'Continued use of our platform signifies acceptance of our terms and conditions, including our policies on data handling and privacy. Failure to comply may result in account termination.'")
        pm = process_message(
            "Continued use of our platform signifies acceptance of our terms and conditions, including our policies on data handling and privacy. Failure to comply may result in account termination."
        )
        print("Suspicious? :", sc_tf_idf.classify(pm))

        print("Testing:  'Our terms of service and privacy policy outline the rules and regulations governing the use of our platform. We prioritize user privacy and ensure data protection in compliance with legal standards.'")
        pm = process_message("Our terms of service and privacy policy outline the rules and regulations governing the use of our platform. We prioritize user privacy and ensure data protection in compliance with legal standards. ")
        print("Suspicious? :", sc_tf_idf.classify(pm))

    # Processing the argument to test the algorithm on a given line.
    elif args.classify:
        sc_tf_idf = TFIDFCLassifier(trainData)
        sc_tf_idf.train()
        pm = process_message(args.classify)
        print("Suspicious? :", sc_tf_idf.classify(pm))

    # Processing the argument to test the algorithm on a given file.
    elif args.file:
        # Display precise data as with the --test argument to provide the user with more details.
        sc_tf_idf = TFIDFCLassifier(trainData)
        sc_tf_idf.train()
        preds_tf_idf = sc_tf_idf.predict(testData["message"])
        print()
        print("Results for TF x IDF classifier:")
        metrics(testData["label"], preds_tf_idf)
        sc_bow = BowClassifier(trainData)
        sc_bow.train()
        preds_bow = sc_bow.predict(testData["message"])
        print()
        print("Results for Bow classifier:")
        metrics(testData["label"], preds_bow)
        print()
        # Processing the pdf file.
        pdf_text = extract_text_from_pdf(args.file)
        lines = pdf_text.split('\n')  # Separating pdf lines to process them individually.
        for line in lines:
            processed_line = process_message(line)
            is_suspicious = sc_tf_idf.classify(processed_line)
            if is_suspicious:
                suspicious_lines.append(line)
    
    # Display only data deemed suspicious.
    print("=========================================\n========Lines flagged suspicious:========\n=========================================\n")
    for suspicious_line in suspicious_lines:
        print(suspicious_line, "\n")

    else:
        parser.print_help()
        print()
        print("Please select mode.")

# Extraction function for the pdf file.
def extract_text_from_pdf(pdf_file):
    with open(pdf_file, 'rb') as file:
        pdf_reader = PdfReader(file)
        text = ''
        for page in pdf_reader.pages:
            text += page.extract_text()
        return text


def process_message(
    message, lower_case=True, stem=True, stop_words=True, gram=1
):
    """
This function transforms messages into a list of "stemmed" keywords, 
which is the heart of the algorithm's operation. If the "gram" value 
is less than 1 (gram > 1), not keywords but pairs of keywords will 
be taken into account. This can vary the efficiency of data processing.
    """
    if lower_case:
        message = message.lower()
    words = word_tokenize(message)
    words = [w for w in words if len(w) > 2]
    if gram > 1:
        w = []
        for i in range(len(words) - gram + 1):
            w += [" ".join(words[i : i + gram])]
        return w
    if stop_words:
        sw = stopwords.words("english")
        words = [word for word in words if word not in sw]
    if stem:
        stemmer = PorterStemmer()
        words = [stemmer.stem(word) for word in words]
    return words


class suspicious_terms_classifier:
    def __init__(self, trainData):
        self.terms, self.labels = trainData["message"], trainData["label"]

    def train(self):
        pass

    def classify(self, message):
        pass

    def calc_TF_and_IDF(self):
        number_of_lines = self.terms.shape[0]  # Defines the number of lines.
        self.suspicious_terms, self.neutral_terms = (
            self.labels.value_counts()[1],
            self.labels.value_counts()[0],
        )
        self.total_terms = self.suspicious_terms + self.neutral_terms
        self.suspicious_words = 0
        # Number of words flagged as suspect.
        self.neutral_words = 0
        # Number of words flagged as neutral.
        self.tf_suspicious = dict()
        # Dictionary with the TF of each word in the suspect data.
        self.tf_neutral = dict()
        # Dictionary with the TF of each word in the neutral data.
        self.idf_suspicious = dict()
        # Dictionary with the IDF of each word in the suspect data.
        self.idf_neutral = dict()

        # Dictionary with the IDF of each word in the neutral data.
        for i in range(number_of_lines):
            # Invoking nltk libraries :)
            message_processed = process_message(self.terms.get(i))
            count = list()
            # Save whether or not a word has appeared in the message.
            # IDF
            for word in message_processed:
                if self.labels[i]:
                    self.tf_suspicious[word] = self.tf_suspicious.get(word, 0) + 1
                    self.suspicious_words += 1
                    # Calculates the TF of a word in the suspect data.
                else:
                    self.tf_neutral[word] = self.tf_neutral.get(word, 0) + 1
                    self.neutral_words += 1
                    # Calculates the TF of a word in the neutral data.
                if word not in count:
                    count += [word]
            for word in count:
                if self.labels[i]:
                    self.idf_suspicious[word] = self.idf_suspicious.get(word, 0) + 1
                    # Calculates the idf (the number of suspect data items containing this word).
                else:
                    self.idf_neutral[word] = self.idf_neutral.get(word, 0) + 1
                    # Calculates the idf (the number of neutral data items containing this word).

    def predict(self, testData):
        # Invokes the classifier for Test Set messages
        result = dict()
        for (i, message) in enumerate(testData):
            processed_message = process_message(message)
            result[i] = int(self.classify(processed_message))
        return result


class TFIDFCLassifier(suspicious_terms_classifier):
    def __init__(self, *args, **kwargs):
        super().__init__(*args, **kwargs)

    def train(self):
        self.calc_TF_and_IDF()
        self.calc_TF_IDF()

    def calc_TF_IDF(self):
        # Performs the overall calculation (tf_idf).
        self.prob_suspicious = dict()
        self.prob_neutral = dict()
        self.sum_tf_idf_suspicious = 0
        self.sum_tf_idf_neutral = 0
        for word in self.tf_suspicious:
            self.prob_suspicious[word] = self.tf_suspicious[word] * log(
                (self.suspicious_terms + self.neutral_terms)
                / (self.idf_suspicious[word] + self.idf_neutral.get(word, 0))
            )
            self.sum_tf_idf_suspicious += self.prob_suspicious[word]

        for word in self.tf_suspicious:
            self.prob_suspicious[word] = (self.prob_suspicious[word] + 1) / (
                self.sum_tf_idf_suspicious + len(self.prob_suspicious.keys())
            )

        for word in self.tf_neutral:
            self.prob_neutral[word] = (self.tf_neutral[word]) * log(
                (self.suspicious_terms + self.neutral_terms)
                / (self.idf_suspicious.get(word, 0) + self.idf_neutral[word])
            )
            self.sum_tf_idf_neutral += self.prob_neutral[word]

        for word in self.tf_neutral:
            self.prob_neutral[word] = (self.prob_neutral[word] + 1) / (
                self.sum_tf_idf_neutral + len(self.prob_neutral.keys())
            )

        self.prob_suspicious_entry, self.prob_neutral_entry = (
            self.suspicious_terms / self.total_terms,
            self.neutral_terms / self.total_terms,
        )

    def classify(self, processed_message):
        # Data classification.
        pSpam, pHam = 0, 0
        for word in processed_message:
            if word in self.prob_suspicious:
                pSpam += log(self.prob_suspicious[word])
            else:
                pSpam -= log(self.sum_tf_idf_suspicious + len(self.prob_suspicious.keys()))
            if word in self.prob_neutral:
                pHam += log(self.prob_neutral[word])
            else:
                pHam -= log(self.sum_tf_idf_neutral + len(self.prob_neutral.keys()))
            pSpam += log(self.prob_suspicious_entry)
            pHam += log(self.prob_neutral_entry)
        return pSpam >= pHam


class BowClassifier(suspicious_terms_classifier):
    def __init__(self, *args, **kwargs):
        super().__init__(*args, **kwargs)

    def train(self):
        self.calc_TF_and_IDF()
        self.calc_prob()

    def calc_prob(self):
        self.prob_suspicious = dict()
        self.prob_neutral = dict()
        for word in self.tf_suspicious:
            # calcule la proba qu'un mot apparaisse dans les spams
            self.prob_suspicious[word] = (self.tf_suspicious[word] + 1) / (
                self.suspicious_words + len(self.tf_suspicious.keys())
            )
        for word in self.tf_neutral:
            # calcule la proba qu'un mot apparaisse dans les non spams
            self.prob_neutral[word] = (self.tf_neutral[word] + 1) / (
                self.neutral_words + len(self.tf_neutral.keys())
            )
        self.prob_suspicious_entry, self.prob_neutral_entry = (
            self.suspicious_terms / self.total_terms,
            self.neutral_terms / self.total_terms,
        )

    def classify(self, processed_message):
        # Data classification.
        pSpam, pHam = 0, 0
        for word in processed_message:
            if word in self.prob_suspicious:
                pSpam += log(self.prob_suspicious[word])
            else:
                pSpam -= log(self.suspicious_words + len(self.prob_suspicious.keys()))
            if word in self.prob_neutral:
                pHam += log(self.prob_neutral[word])
            else:
                pHam -= log(self.neutral_words + len(self.prob_neutral.keys()))
            pSpam += log(self.prob_suspicious_entry)
            pHam += log(self.prob_neutral_entry)
        return pSpam >= pHam


def metrics(labels, predictions):  # Calculates metrics:
    # True Positive, True Negative, False Positive, False Negative.
    true_pos, true_neg, false_pos, false_neg = 0, 0, 0, 0
    for i in range(len(labels)):
        true_pos += int(labels.get(i) == 1 and predictions.get(i) == 1)
        true_neg += int(labels.get(i) == 0 and predictions.get(i) == 0)
        false_pos += int(labels.get(i) == 0 and predictions.get(i) == 1)
        false_neg += int(labels.get(i) == 1 and predictions.get(i) == 0)
    precision = true_pos / (true_pos + false_pos)
    recall = true_pos / (true_pos + false_neg)
    Fscore = 2 * precision * recall / (precision + recall)
    accuracy = (true_pos + true_neg) / (
        true_pos + true_neg + false_pos + false_neg
    )

    print("Precision: ", precision)
    print("Recall: ", recall)
    print("F-score: ", Fscore)
    print("Accuracy: ", accuracy)


if __name__ == "__main__":
    main()
