#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> 

void function(n) {
    if (n == 0) {
        return;
    }
    else {
        function(n / 2);
        printf("%d ", n);
        return;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    function(n);

    return 0;
}