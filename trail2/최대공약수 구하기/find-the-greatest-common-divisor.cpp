#include <iostream>

using namespace std;

int n, m;

int getGCD(int n, int m) {
    return m > 0 ? getGCD(m, n % m) : n;
}

int main() {
    cin >> n >> m;
    cout << getGCD(n, m) << endl;
    
    return 0;
}