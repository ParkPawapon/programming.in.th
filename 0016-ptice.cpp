#include <iostream>
using namespace std;

int main() {
    int questionCount;
    string answerKey;

    string adrianPattern = "ABC";
    string brunoPattern = "BABC";
    string goranPattern = "CCAABB";

    int adrianScore = 0;
    int brunoScore = 0;
    int goranScore = 0;

    cin >> questionCount;
    cin >> answerKey;

    for (int i = 0; i < questionCount; i++) {
        if (answerKey[i] == adrianPattern[i % 3]) {
            adrianScore++;
        }

        if (answerKey[i] == brunoPattern[i % 4]) {
            brunoScore++;
        }

        if (answerKey[i] == goranPattern[i % 6]) {
            goranScore++;
        }
    }

    int bestScore = adrianScore;

    if (brunoScore > bestScore) {
        bestScore = brunoScore;
    }

    if (goranScore > bestScore) {
        bestScore = goranScore;
    }

    cout << bestScore << endl;

    if (adrianScore == bestScore) {
        cout << "Adrian" << endl;
    }

    if (brunoScore == bestScore) {
        cout << "Bruno" << endl;
    }

    if (goranScore == bestScore) {
        cout << "Goran" << endl;
    }

    return 0;
}