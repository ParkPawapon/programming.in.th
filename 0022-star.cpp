#include <iostream>
using namespace std;

int main() {
    int lineCount;
    int width;
    int centerColumn;

    cin >> lineCount;

    if (lineCount % 2 == 0) {
        width = lineCount - 1;
    } else {
        width = lineCount;
    }

    centerColumn = width / 2;

    for (int row = 0; row < lineCount; row++) {
        int distanceFromCenter;

        if (row < lineCount - 1 - row) {
            distanceFromCenter = row;
        } else {
            distanceFromCenter = lineCount - 1 - row;
        }

        for (int col = 0; col < width; col++) {
            if (col == centerColumn - distanceFromCenter || col == centerColumn + distanceFromCenter) {
                cout << "*";
            } else {
                cout << "-";
            }
        }

        cout << endl;
    }

    return 0;
}