#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> 
#include <math.h>

/*
	양의 정수를 입력받아, 각 자리의 수를 낮은 자릿수부터 차례로 출력

	[입력예시]
	3408

	[출력예시]
	8
	0
	4
	3
*/

void printOrder(int n, int digits);
int cntDigits(int n);

int main() {
	int n;
	scanf("%d", &n);

	printOrder(n, cntDigits(n));

	return 0;
}

void printOrder(int n, int digits) {
	if (cntDigits(n) == 1) {
		printf("%d", n);
		return;
	}
	else {
		printf("%d \n", n % 10);
		printOrder(n / 10, digits / 10);
	}
}

int cntDigits(int n) {
	int cnt = 0;
	while (n / 10 != 0) {
		n /= 10;
		++cnt;
	}
	return (int)pow(10, cnt);
}
