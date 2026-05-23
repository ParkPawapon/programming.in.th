#include <iostream>
using namespace std;

int main() {
    string s;
    bool hasSmall = false;
    bool hasCapital = false;

    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            hasSmall = true;
        }

        if (s[i] >= 'A' && s[i] <= 'Z') {
            hasCapital = true;
        }
    }

    if (hasCapital == true && hasSmall == false) {
        cout << "All Capital Letter";
    } else if (hasSmall == true && hasCapital == false) {
        cout << "All Small Letter";
    } else {
        cout << "Mix";
    }

    return 0;
}