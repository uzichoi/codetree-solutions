#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main() {
    int m1, d1, m2, d2;
    cin >> m1 >> d1 >> m2 >> d2;

    int days[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int from = 0, to = 0;    
    
    for (int i = 0; i < m1; i++) {
        from += days[i];
    }
    from += d1;

    for (int i = 0; i < m2; i++) {
        to += days[i];
    }
    to += d2;

    int offset = to - from + 1;
    cout << offset << endl;

    return 0;
}