#include <iostream>
using namespace std;

int div10(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    // cout << sum << endl;

    return sum / 10;
}

int main() {
    int n;
    cin >> n;
    cout << div10(n) << endl;

    return 0;
}