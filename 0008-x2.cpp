#include <iostream>
using namespace std;

int main() {
    int firstValue;
    int averageValue;
    int secondValue;

    cin >> firstValue >> averageValue;

    secondValue = (averageValue * 2) - firstValue;

    cout << secondValue;

    return 0;
}