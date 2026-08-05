#include <iostream>
using namespace std;

void isVaild(int n) {
    int digitSum = n / 10 + n % 10;
    if (n % 2 == 0 && digitSum % 5 == 0) cout << "Yes" << endl;
    else cout << "No" << endl;

}

int main() {
    int n;    // n은 2자리 정수
    cin >> n;
    isVaild(n);

    return 0;
}