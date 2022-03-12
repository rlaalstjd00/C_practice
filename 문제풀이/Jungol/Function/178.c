#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> 

int function(int n) {
    int result = 1;
    for (int i = 1;i < n+1;i++) {
        result *= 2;
    }
    return result;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", function(n));

    return 0;
}