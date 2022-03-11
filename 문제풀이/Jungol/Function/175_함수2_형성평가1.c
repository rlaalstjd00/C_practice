#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> 

void input(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}

void orderDesc(int arr[], int n) {
    for (int i = 0; i < (n - 1); i++) {
        for (int j = i + 1; j< n; j++) {
            if (arr[i] < arr[j]) {
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}

void output(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[15];
    input(arr, n);
    orderDesc(arr, n);
    output(arr, n);
    return 0;
}