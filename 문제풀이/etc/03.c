#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> 
#include <math.h>

/*
	���� ������ �Է¹޾�, �� �ڸ��� ���� ���� �ڸ������� ���ʷ� ��� (����Լ� ���)

	[�Է¿���]
	3408
	
	[��¿���]
	3
	4
	0
	8
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
		printf("%d \n", n / digits);
		printOrder(n % digits, digits / 10);
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
