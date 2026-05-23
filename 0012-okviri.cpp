#include <iostream>
#include <vector>
using namespace std;

int main() {
    string word;
    cin >> word;

    int wordLength = word.length();
    int width = (wordLength * 4) + 1;

    vector<string> picture(5, string(width, '.'));

    for (int i = 0; i < wordLength; i++) {
        int centerColumn = (i * 4) + 2;
        char frameMark;

        if ((i + 1) % 3 == 0) {
            frameMark = '*';
        } else {
            frameMark = '#';
        }

        if (frameMark == '*' || picture[0][centerColumn] != '*') {
            picture[0][centerColumn] = frameMark;
        }

        if (frameMark == '*' || picture[1][centerColumn - 1] != '*') {
            picture[1][centerColumn - 1] = frameMark;
        }

        if (frameMark == '*' || picture[1][centerColumn + 1] != '*') {
            picture[1][centerColumn + 1] = frameMark;
        }

        if (frameMark == '*' || picture[2][centerColumn - 2] != '*') {
            picture[2][centerColumn - 2] = frameMark;
        }

        picture[2][centerColumn] = word[i];

        if (frameMark == '*' || picture[2][centerColumn + 2] != '*') {
            picture[2][centerColumn + 2] = frameMark;
        }

        if (frameMark == '*' || picture[3][centerColumn - 1] != '*') {
            picture[3][centerColumn - 1] = frameMark;
        }

        if (frameMark == '*' || picture[3][centerColumn + 1] != '*') {
            picture[3][centerColumn + 1] = frameMark;
        }

        if (frameMark == '*' || picture[4][centerColumn] != '*') {
            picture[4][centerColumn] = frameMark;
        }
    }

    for (int i = 0; i < 5; i++) {
        cout << picture[i] << endl;
    }

    return 0;
}