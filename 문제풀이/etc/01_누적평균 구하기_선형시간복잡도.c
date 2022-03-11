#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> 
#include <stdlib.h>

/*
    배열 arr가 주어졌을 때 누적평균(정수로 반올림) 을 담은 배열 prefixAverages 구하기
    * prefixAverages1 : 2중 for문 이용 O(n^2)
    * prefixAverages2 : 단일 for문을 이용한 성능 향상 O(n)
    * 결과 둘다 출력해보기
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