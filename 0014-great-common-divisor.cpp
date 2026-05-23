#include <iostream>
using namespace std;

int main() {
    long long firstNumber;
    long long secondNumber;

    cin >> firstNumber >> secondNumber;

    while (secondNumber != 0) {
        long long remainderValue = firstNumber % secondNumber;

        firstNumber = secondNumber;
        secondNumber = remainderValue;
    }

    cout << firstNumber;

    return 0;
}