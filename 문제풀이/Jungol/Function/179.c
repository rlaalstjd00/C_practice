#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> 

void function(float a,float b,float c) {
    printf("%d", (int)((a + b + c) / 3 + 0.5));
    printf("\n");
    a = (int)(a + 0.5);
    b = (int)(b + 0.5);
    c = (int)(c + 0.5);
    printf("%d", (int)((a + b + c) / 3 + 0.5));
}

int main() {
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    function(a, b, c);

    return 0;
}