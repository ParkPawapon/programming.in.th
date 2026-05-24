#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int sideLengths[4];
    int maxArea;

    for (int i = 0; i < 4; i++) {
        cin >> sideLengths[i];
    }

    sort(sideLengths, sideLengths + 4);

    maxArea = sideLengths[0] * sideLengths[2];

    cout << maxArea;

    return 0;
}