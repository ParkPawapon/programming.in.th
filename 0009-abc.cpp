#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int numbers[3];
    int valueA, valueB, valueC;
    string orderText;

    cin >> numbers[0] >> numbers[1] >> numbers[2];
    cin >> orderText;

    sort(numbers, numbers + 3);

    valueA = numbers[0];
    valueB = numbers[1];
    valueC = numbers[2];

    for (int i = 0; i < 3; i++) {
        if (orderText[i] == 'A') {
            cout << valueA;
        } else if (orderText[i] == 'B') {
            cout << valueB;
        } else if (orderText[i] == 'C') {
            cout << valueC;
        }

        if (i < 2) {
            cout << " ";
        }
    }

    return 0;
}