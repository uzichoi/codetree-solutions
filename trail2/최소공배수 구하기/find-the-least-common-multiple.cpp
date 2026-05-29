#include <iostream>
using namespace std;

int getGCD(int n, int m) {
    return m > 0 ? getGCD(m, n % m): n;
}

int getLCM(int n, int m) {
    return (n / getGCD(n , m)) * m;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << getLCM(n, m);

    return 0;
}