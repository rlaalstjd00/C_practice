#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> 
#include <stdlib.h>

/*
    �迭 arr�� �־����� �� �������(������ �ݿø�) �� ���� �迭 prefixAverages ���ϱ�
    * prefixAverages1 : 2�� for�� �̿� O(n^2)
    * prefixAverages2 : ���� for���� �̿��� ���� ��� O(n)
    * ��� �Ѵ� ����غ���
*/

int* prefixAverages1(float arr[], int n) {
    int* resultArr = (int*)malloc(sizeof(int) * n);
    
    for (int i = 0; i < n ; i++) {
        float sum = 0;
        for (int j = 0; j < i+1; j++) {
            sum += arr[j];
        }
        resultArr[i] = (int)(sum / (i + 1) + 0.5);
    }
    return resultArr;
}

int* prefixAverages2(float arr[], int n) {
    float* interimArr = (float*)malloc(sizeof(float) * n);
    int* resultArr = (int*)malloc(sizeof(int) * n);
    float sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        interimArr[i] = sum;
        resultArr[i] = (int)(interimArr[i] / (i + 1) + 0.5);
    }
    return resultArr;
}

void output(int arr[],int n) {
    for (int i = 0; i < n;i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    float* arr = (float*)malloc(sizeof(float) * n);
    for (int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
    }

    int* result1 = prefixAverages1(arr, n);
    int* result2 = prefixAverages2(arr, n);

    output(result1, n);
    printf("\n");
    output(result2, n);
    
    return 0;
}