#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main() {
    int m1, d1, m2, d2;
    int daysPerMonths[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    cin >> m1 >> d1 >> m2 >> d2;

    int fromDays = 0;    
    for (int i = 1; i < m1; i++) {
        fromDays += daysPerMonths[i];
    }
    fromDays += d1;

    int toDays = 0;
    for (int i = 0; i < m2; i++) {
        toDays += daysPerMonths[i];
    }
    toDays += d2;

    int offset = toDays - fromDays;        // 변위
    int dayIndex = offset % 7;            // 날짜 인덱스
    if (dayIndex < 0) dayIndex += 7;    // 나머지 음수 연산 방지

    string dayNames[7] = { "Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun" };
    
    cout << dayNames[dayIndex] << endl;

    return 0;
}