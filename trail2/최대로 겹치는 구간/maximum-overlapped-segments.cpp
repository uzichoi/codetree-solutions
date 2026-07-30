#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int offset = 100;   
    int arr[205] = { 0 };
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        int x1, x2;
        cin >> x1 >> x2;
        for (int j = x1 + offset; j < x2 + offset; j++) {
            arr[j]++;
        }
    }

    int max_val = arr[0];
    for (int i = 1; i < 205; i++) {
        if (max_val < arr[i]) max_val = arr[i];
    }

    cout << max_val << endl;

    return 0;
}