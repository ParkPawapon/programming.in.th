#include <iostream>
using namespace std;

int main() {
    int m, n;
    long long a[105][105], b[105][105];

    cin >> m >> n;

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> b[i][j];
        }
    }

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            cout << a[i][j] + b[i][j];

            if (j < n) {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}