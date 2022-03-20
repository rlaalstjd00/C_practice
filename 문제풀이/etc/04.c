#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> 
#include <math.h>

/*
	���� ������ �Է¹޾�, �� �ڸ��� ���� ���� �ڸ������� ���ʷ� ���

	[�Է¿���]
	3408

	[��¿���]
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
