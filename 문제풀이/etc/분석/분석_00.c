#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> 
#include <stdlib.h>

/*
    2차원 배열 : 특정 조건 행 찾기

    n x n 비트 행렬의 각 행은 1과 0으로만 구성
    행렬을 입력 받아 가장 많은 1을 포함하는 행을 찾기
    
    [입력 예시]
    8
    1 1 1 1 0 0 0 0
    1 1 1 1 1 0 0 0
    1 0 0 0 0 0 0 0
    1 1 1 1 1 1 0 0
    1 1 1 1 0 0 0 0
    0 0 0 0 0 0 0 0
    1 1 1 1 1 1 1 0
    1 1 1 1 1 0 0 0

    [출력 예시]
    6

*/
int mostOnes(int ** arr, int n) {
    int i = 0, j = 0, row = 0;

    while ((i < n) && (j < n)) {
        if (arr[i][j] == 0) {
            i++;
        }
        else {
            row = i;
            j++;
        }
    }
    return row;
}
int main() {
    int n;
    int ** arr;

    scanf("%d", &n);
    arr = (int **)malloc(sizeof(int*) * n);

    for (int i = 0; i < n; i++) {
        arr[i] = (int *)malloc(sizeof(int) * n);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("%d", mostOnes(arr, n));
}