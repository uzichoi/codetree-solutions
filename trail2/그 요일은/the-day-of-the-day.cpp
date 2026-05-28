#include <iostream>
#include <string>
using namespace std;

int getDayIndex(string day) {
    if (day == "Mon") return 0;
    if (day == "Tue") return 1;
    if (day == "Wed") return 2;
    if (day == "Thu") return 3;
    if (day == "Fri") return 4;
    if (day == "Sat") return 5;
    if (day == "Sun") return 6;
}

int main() {
    int m1, d1, m2, d2;
    string targetDayStr;    // 타겟 요일
    
    cin >> m1 >> d1 >> m2 >> d2;
    cin >> targetDayStr;

    int daysPerMonths[13] = { 0,31,29,31,30,31,30,31,31,30,31,30,31 };
    int currentDayIndex = 0;    // m1월 d1일은 월요일 고정
    int targetDayIndex = getDayIndex(targetDayStr);    
    int match = 0;

    int month = m1;
    int day = d1;

    while (true) {
        // 현재 요일과 타겟 요일이 같으면 카운터 증가
        if (currentDayIndex == targetDayIndex) match++;

        // 종료일에 다다르면 종료
        if (month == m2 && day == d2) break;

        day++;

        currentDayIndex = (currentDayIndex + 1) % 7;

        if (day > daysPerMonths[month]) {
            month++;
            day = 1;
        }
    }

    cout << match << endl;

    return 0;
}