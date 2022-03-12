#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> 

int function(int n) {
    if (n % 2 == 0) {
        if(n == 2) {
            return 0;
        }
    }
    else {
        if (n == 1) {
            return 0;
        }
    }
    n -= 2;
    function(n);
    printf("%d ", n);
    return 0;
}

int main(){
    int n;
    scanf("%d", &n);
    function(n + 2);

    return 0;
}