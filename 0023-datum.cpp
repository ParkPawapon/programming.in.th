#include <iostream>
using namespace std;

int main() {
    int day;
    int month;

    int daysInMonth[12] = {
        31, 28, 31, 30, 31, 30,
        31, 31, 30, 31, 30, 31
    };

    string weekDays[7] = {
        "Monday", "Tuesday", "Wednesday", "Thursday",
        "Friday", "Saturday", "Sunday"
    };

    cin >> day >> month;

    int totalDays = day - 1;

    for (int i = 0; i < month - 1; i++) {
        totalDays += daysInMonth[i];
    }

    int dayIndex = (totalDays + 3) % 7;

    cout << weekDays[dayIndex];

    return 0;
}