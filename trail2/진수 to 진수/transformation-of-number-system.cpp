#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    int a, b;
    string n;

    cin >> a >> b;
    cin >> n;

    // 1) n(a) -> n(10)
    int dec = 0;    // 10진수로 변환한 n
    int len = n.length();
    for(int i=0; i<len; i++) {
        dec += (n[i]-'0') * pow(a, len-1-i);
    }

    // 2) n(10) - > n(b)
    int digit[16] = {}; // b진스로 변환한 n
    int idx = 0;    // 배열 인덱스
    while(true) {
        if(dec<b) {
            digit[idx++] = dec;
            break;
        }
        digit[idx++] = dec % b;
        dec /= b;
    }

    // n(b) 출력
    for(int i = idx-1; i>=0; i--){
        cout<<digit[i];
    }

    return 0;
}