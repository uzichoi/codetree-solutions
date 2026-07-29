#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int arr[100] = {0};
    int N, K;   // N: 배열 크기, K: 명령 횟수
    cin >> N >> K;

    int a, b;   // a: 시작 인덱스, b: 종료 인덱스
    for(int i = 0; i < K; i++) {
        cin >> a >> b;
        for(int j = a; j <= b; j++) {
            arr[j]++;
        }
    }
    
    int max_val = arr[0];
    for(int i = 1; i <= N; i++) {
        if(max_val < arr[i]) max_val = arr[i];
    }

    cout << max_val << endl;

    return 0;
}