#include <iostream>
using namespace std;

int main() {
    int n, base;    // 변환할 10진수, 변환할 진법
    cin >> n >> base;

    int digit[16] = {}; // 진수 변환된 수를 저장할 배열
    int cnt = 0;

    while(true) {
        if (n < base) {
            digit[cnt++] = n;
            break;
        }
        digit[cnt++] = n % base;
        n /= base;
    }

    for(int i = cnt - 1; i >= 0; i--) {
        cout << digit[i];
    }

    return 0;
}