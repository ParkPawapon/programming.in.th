#include <iostream>
using namespace std;

int main() {
    int bestPlayer = 0;
    int bestScore = 0;

    for (int player = 1; player <= 5; player++) {
        int totalScore = 0;

        for (int i = 0; i < 4; i++) {
            int score;
            cin >> score;
            totalScore += score;
        }

        if (totalScore > bestScore) {
            bestScore = totalScore;
            bestPlayer = player;
        }
    }

    cout << bestPlayer << " " << bestScore;

    return 0;
}