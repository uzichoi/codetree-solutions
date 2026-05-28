#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    int hours = c - a;
    int mins = d - b;
    int offset = (hours) * 60 + mins;

    printf("%d\n", offset);

    return 0;
}