#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str;
    cin >> str;

    for (int i = 0; i < str.length(); i++)
        sort(str.begin(), str.end());
    for (int i = 0; i < str.length(); i++)
        cout << str[i];
    cout << endl;

    return 0;
}