#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> 

int getTotalScore(int a, int b, int c) {
    return (a + b + c);
}

int main() {
    int arr[4][4];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
            arr[i][3] = getTotalScore(arr[i][0], arr[i][1], arr[i][2]);
        }
    }
    for (int i = 0;i < 4;i++) {
        arr[3][i] = getTotalScore(arr[0][i], arr[1][i], arr[2][i]);
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}