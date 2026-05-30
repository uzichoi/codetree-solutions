#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    string binary;
    cin >> binary;

    int n = binary.length();
    int decimal = 0;

    for(int i = 0; i < n; i++) {
        decimal += (binary[i] - '0') * pow(2, n - 1 - i);
    }

    cout << decimal << endl;



    return 0;
}