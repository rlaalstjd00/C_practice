#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> 
#include <math.h>

int function(float a, float b) {
    a = sqrt(a);
    b = sqrt(b);
    int cnt = 0;
    if (a < b) {
        if (a == (int)a) {
            a = (int)a;
        }
        else {
            a = (int)a + 1;
        }
        for (int i = a;i <= b;i++){
            cnt++;
        }
    }
    else {
        if (b == (int)b) {
            b = (int)b;
        }
        else {
            b = (int)b + 1;
        }
        for (int i = b;i <= a;i++) {
            cnt++;
        }
    }
    return cnt;
}

int main() {
    float a, b;
    scanf("%f %f", &a, &b);
    printf("%d", function(a, b));
    return 0;
}