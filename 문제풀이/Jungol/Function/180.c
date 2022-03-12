#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> 
#define NUM 7

void function(int* arr) {
    for (int i = 0; i < NUM-1; i++) {
        if(arr[i] > arr[i + 1]) {
            int tmp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = tmp;
        }
    }
}

int main() {
    int arr[NUM];
    for (int i = 0; i < NUM; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 3; i++) {
        function(arr);
    }
    for (int i = 0; i < 7; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}