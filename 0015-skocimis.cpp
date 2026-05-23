#include <iostream>
using namespace std;

int main() {
    int leftPosition;
    int middlePosition;
    int rightPosition;

    int leftGap;
    int rightGap;
    int maxMoves;

    cin >> leftPosition >> middlePosition >> rightPosition;

    leftGap = middlePosition - leftPosition;
    rightGap = rightPosition - middlePosition;

    if (leftGap > rightGap) {
        maxMoves = leftGap - 1;
    } else {
        maxMoves = rightGap - 1;
    }

    cout << maxMoves;

    return 0;
}