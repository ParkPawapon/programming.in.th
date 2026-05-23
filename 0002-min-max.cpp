#include <iostream>
using namespace std;

int main() {
    int n;
    long long x;
    long long mn, mx;

    cin >> n;

    cin >> x;
    mn = x;
    mx = x;

    for (int i = 2; i <= n; i++) {
        cin >> x;

        if (x < mn) {
            mn = x;
        }

        if (x > mx) {
            mx = x;
        }
    }

    cout << mn << endl;
    cout << mx << endl;

    return 0;
}