#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    int digit[16] = {};
    int cnt = 0;

    // 2진수 변환
    while(true) {
        if(n < 2) {
            digit[cnt++] = n;
            break;
        }
        digit[cnt++] = n % 2;
        n /= 2;
    }

    // 출력
    for(int i = cnt - 1; i >= 0; i--) {
        cout << digit[i];
    }

    return 0;
}