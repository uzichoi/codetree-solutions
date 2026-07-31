#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

int main() {
    int arr[100] = { 0 };
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) cin >> arr[i];

    // 오름차순 출력
    sort(arr, arr + n);
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    // 내림차순 출력
    sort(arr, arr + n, greater<int>());
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}