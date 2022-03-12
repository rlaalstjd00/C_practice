#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> 
#define PI 3.141592

double function(double r) {
    double s = r * r * PI;
    return s;
}

int main() {
    double r;
    printf("radius : ");
    scanf("%lf", &r);

    printf("area = %.3lf", function(r));

    return 0;
}