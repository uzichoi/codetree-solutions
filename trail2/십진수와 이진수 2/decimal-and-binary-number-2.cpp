#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    string n;   // 2진수 n
    cin >> n;

    // 2진수 n을 10진수로 변환
    int size = n.length();   // 문자 배열 n의 크기
    int dec = 0;    // 10진수 n

    for(int i = 0; i < size; i++) {
        dec += (n[i] - '0') * pow(2, size - 1 - i);
    }

    // n을 17배한 값을 2진 변환 
    int dec17 = dec * 17;    // dec를 17배한 값
    int digit[16] = {};     // dec17을 2진 변환한 값을 저장할 배열
    int idx = 0;    // 배열 인덱스

    while(true) {
        if(dec17 < 2) {
            digit[idx++] = dec17;
            break;
        }
        digit[idx++] = dec17 % 2;
        dec17 /= 2;
    }

    // 거꾸로 출력
    for(int i = idx - 1; i >= 0; i--) {
        cout << digit[i];
    }

    return 0;
}