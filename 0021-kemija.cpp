#include <iostream>
using namespace std;

bool isVowel(char letter) {
    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u') {
        return true;
    }

    return false;
}

int main() {
    string encodedText;
    string decodedText = "";

    getline(cin, encodedText);

    for (int i = 0; i < encodedText.length(); i++) {
        decodedText += encodedText[i];

        if (isVowel(encodedText[i])) {
            i += 2;
        }
    }

    cout << decodedText;

    return 0;
}