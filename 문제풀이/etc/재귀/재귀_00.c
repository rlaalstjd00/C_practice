#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> 

/*
	���� ���� n�� �Է¹޾� 1���� n���� �� ���ϱ� (����Լ� ���)
*/

int function(int n);

int main() {
	int n;
	int sum;
	scanf("%d", &n);

	sum = function(n);
	printf("%d", sum);

	return 0;
}

int function(int n) {
	if (n == 1) {
		return 1;
	}
	else {
		return n += function(n - 1);
	}
}