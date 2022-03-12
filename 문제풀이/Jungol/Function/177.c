#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> 

int function(int arr[]) {
    int sum = 0;
    for (int i = 0; i < 5;i++) {
        if (arr[i] >= 0) {
            sum += arr[i];
        }
        else {
            sum += (-arr[i]);
        }
    }
    return sum;
}

int main() {
    int arr[5];
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    printf("%d",function(arr));
}