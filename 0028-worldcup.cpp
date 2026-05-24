#include <iostream>
#include <algorithm>
using namespace std;

struct Team {
    string name;
    int point;
    int goalFor;
    int goalAgainst;
};

bool compareTeam(Team firstTeam, Team secondTeam) {
    int firstGoalDiff = firstTeam.goalFor - firstTeam.goalAgainst;
    int secondGoalDiff = secondTeam.goalFor - secondTeam.goalAgainst;

    if (firstTeam.point != secondTeam.point) {
        return firstTeam.point > secondTeam.point;
    }

    if (firstGoalDiff != secondGoalDiff) {
        return firstGoalDiff > secondGoalDiff;
    }

    return firstTeam.goalFor > secondTeam.goalFor;
}

int main() {
    Team teams[4];
    int goalTable[4][4];

    for (int i = 0; i < 4; i++) {
        cin >> teams[i].name;
        teams[i].point = 0;
        teams[i].goalFor = 0;
        teams[i].goalAgainst = 0;
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> goalTable[i][j];
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (i == j) {
                continue;
            }

            teams[i].goalFor += goalTable[i][j];
            teams[i].goalAgainst += goalTable[j][i];

            if (goalTable[i][j] > goalTable[j][i]) {
                teams[i].point += 3;
            } else if (goalTable[i][j] == goalTable[j][i]) {
                teams[i].point += 1;
            }
        }
    }

    sort(teams, teams + 4, compareTeam);

    for (int i = 0; i < 4; i++) {
        cout << teams[i].name << " " << teams[i].point << endl;
    }

    return 0;
}