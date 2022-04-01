#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> 
#include <stdlib.h>

/*
    2���� �迭 : Ư�� ���� �� ã��

    n x n ��Ʈ ����� �� ���� 1�� 0���θ� ����
    ����� �Է� �޾� ���� ���� 1�� �����ϴ� ���� ã��
    
    [�Է� ����]
    8
    1 1 1 1 0 0 0 0
    1 1 1 1 1 0 0 0
    1 0 0 0 0 0 0 0
    1 1 1 1 1 1 0 0
    1 1 1 1 0 0 0 0
    0 0 0 0 0 0 0 0
    1 1 1 1 1 1 1 0
    1 1 1 1 1 0 0 0

    [��� ����]
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