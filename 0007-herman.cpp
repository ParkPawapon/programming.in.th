#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int radius;
    double euclideanArea;
    double taxiArea;
    const double pi = 3.141592653589793;

    cin >> radius;

    euclideanArea = pi * radius * radius;
    taxiArea = 2.0 * radius * radius;

    cout << fixed << setprecision(6);
    cout << euclideanArea << endl;
    cout << taxiArea << endl;

    return 0;
}