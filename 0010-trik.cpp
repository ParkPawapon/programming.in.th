#include <iostream>
using namespace std;

int main() {
    string moves;
    int ballPosition = 1;

    cin >> moves;

    for (int i = 0; i < moves.length(); i++) {
        if (moves[i] == 'A') {
            if (ballPosition == 1) {
                ballPosition = 2;
            } else if (ballPosition == 2) {
                ballPosition = 1;
            }
        } else if (moves[i] == 'B') {
            if (ballPosition == 2) {
                ballPosition = 3;
            } else if (ballPosition == 3) {
                ballPosition = 2;
            }
        } else if (moves[i] == 'C') {
            if (ballPosition == 1) {
                ballPosition = 3;
            } else if (ballPosition == 3) {
                ballPosition = 1;
            }
        }
    }

    cout << ballPosition;

    return 0;
}