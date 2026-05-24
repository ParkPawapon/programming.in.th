#include <iostream>
#include <algorithm>
using namespace std;

string addBigNumbers(string firstNumber, string secondNumber) {
    string answer = "";
    int carry = 0;

    int i = firstNumber.length() - 1;
    int j = secondNumber.length() - 1;

    while (i >= 0 || j >= 0 || carry > 0) {
        int sum = carry;

        if (i >= 0) {
            sum += firstNumber[i] - '0';
            i--;
        }

        if (j >= 0) {
            sum += secondNumber[j] - '0';
            j--;
        }

        answer += (sum % 10) + '0';
        carry = sum / 10;
    }

    reverse(answer.begin(), answer.end());

    return answer;
}

int main() {
    string firstNumber;
    string secondNumber;
    char operationSign;

    cin >> firstNumber;
    cin >> operationSign;
    cin >> secondNumber;

    if (operationSign == '+') {
        cout << addBigNumbers(firstNumber, secondNumber);
    } else {
        cout << "1";

        int zeroCount = (firstNumber.length() - 1) + (secondNumber.length() - 1);

        for (int i = 0; i < zeroCount; i++) {
            cout << "0";
        }
    }

    return 0;
}