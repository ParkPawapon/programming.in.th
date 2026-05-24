#include <iostream>
using namespace std;

int main() {
    int limitNumber;
    int targetOrder;
    int removedCount = 0;
    bool isRemoved[1005] = {false};

    cin >> limitNumber >> targetOrder;

    for (int number = 2; number <= limitNumber; number++) {
        if (isRemoved[number] == false) {
            for (int multiple = number; multiple <= limitNumber; multiple += number) {
                if (isRemoved[multiple] == false) {
                    isRemoved[multiple] = true;
                    removedCount++;

                    if (removedCount == targetOrder) {
                        cout << multiple;
                        return 0;
                    }
                }
            }
        }
    }

    return 0;
}