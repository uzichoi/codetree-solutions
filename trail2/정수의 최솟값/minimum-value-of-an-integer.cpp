#include <iostream>
using namespace std;

int getMin(int a, int b, int c) {
    int min = a;
    if (min > b) min = b;
    if (min > c) min = c;
    if (min > a) min = a;

    return min;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    
    cout << getMin(a, b, c);

    return 0;
}
