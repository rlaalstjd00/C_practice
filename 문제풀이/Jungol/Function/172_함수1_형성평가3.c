#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> 

int printSquare(int n) {
    for (int i = 0;i < n;i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", (i+1)*(j+1));
        }
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    printSquare(n);
    return 0;
}