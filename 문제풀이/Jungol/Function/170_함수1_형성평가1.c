#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> 

void printFunction() {
    printf("@@@@@@@@@@\n");
}

int main() {
    printf("first\n");
    printFunction();
    printf("second\n");
    printFunction();
    printf("third\n");
    printFunction();
}