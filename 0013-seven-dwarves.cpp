#include <iostream>
using namespace std;

int main() {
    int hatNumbers[9];
    int totalSum = 0;
    int firstWrongIndex = -1;
    int secondWrongIndex = -1;

    for (int i = 0; i < 9; i++) {
        cin >> hatNumbers[i];
        totalSum += hatNumbers[i];
    }

    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 9; j++) {
            if (totalSum - hatNumbers[i] - hatNumbers[j] == 100) {
                firstWrongIndex = i;
                secondWrongIndex = j;
            }
        }
    }

    for (int i = 0; i < 9; i++) {
        if (i != firstWrongIndex && i != secondWrongIndex) {
            cout << hatNumbers[i] << endl;
        }
    }

    return 0;
}