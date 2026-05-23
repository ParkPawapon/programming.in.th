#include <iostream>
using namespace std;

int main() {
    int number;
    int remainderValue;
    int uniqueCount = 0;
    bool usedRemainder[42] = {false};

    for (int i = 0; i < 10; i++) {
        cin >> number;

        remainderValue = number % 42;

        if (usedRemainder[remainderValue] == false) {
            usedRemainder[remainderValue] = true;
            uniqueCount++;
        }
    }

    cout << uniqueCount;

    return 0;
}