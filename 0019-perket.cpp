#include <iostream>
using namespace std;

int main() {
    int ingredientCount;
    int sourValue[10];
    int bitterValue[10];

    cin >> ingredientCount;

    for (int i = 0; i < ingredientCount; i++) {
        cin >> sourValue[i] >> bitterValue[i];
    }

    int minDifference = 1000000000;

    for (int mask = 1; mask < (1 << ingredientCount); mask++) {
        int totalSour = 1;
        int totalBitter = 0;

        for (int i = 0; i < ingredientCount; i++) {
            if (mask & (1 << i)) {
                totalSour *= sourValue[i];
                totalBitter += bitterValue[i];
            }
        }

        int difference;

        if (totalSour > totalBitter) {
            difference = totalSour - totalBitter;
        } else {
            difference = totalBitter - totalSour;
        }

        if (difference < minDifference) {
            minDifference = difference;
        }
    }

    cout << minDifference;

    return 0;
}