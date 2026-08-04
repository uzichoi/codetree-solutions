#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    int start = 1;  // 카운터 변수

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout << start % 10 << " ";
            start++;
            if(start>=10) start=1;
        }
        cout << endl;
    }

    return 0;
}