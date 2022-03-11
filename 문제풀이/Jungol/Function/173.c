#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> 

int subFunction(int a, int b) {
    if (a > b) {
        return (a * a - b * b);
    }
    else {
        return (b * b - a * a);
    }
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", subFunction(a, b));
    return 0;
}