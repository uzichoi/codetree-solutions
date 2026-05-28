#include <iostream>
using namespace std;

int main() {
    // 기준시: 2011년 11월 11일 11시 11분
    // 미래시: 2011년 11월  a일  b시  c분
    int a, b, c;
    cin >> a >> b >> c;
    
    int from = (11 * 24 * 60) + (11 * 60) + 11;
    int to = (a * 24 * 60) + (b * 60) + c;
    int offset = to - from;

    if (offset < 0) {
        cout << -1 << endl;
        return 0;
    }
    
    cout << offset << endl;

    return 0;
}