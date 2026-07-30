#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[100] = { 0 };
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        int x1, x2;
        cin >> x1 >> x2;
        for (int j = x1; j <= x2; j++) {
            arr[j]++;
        }
    }

    int max_val = arr[0];
    for (int i = 0; i < 100; i++) {
        if (max_val < arr[i]) max_val = arr[i];
    }

    cout << max_val << endl;

    return 0;
}