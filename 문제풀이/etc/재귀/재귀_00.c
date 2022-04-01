#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> 

/*
	양의 정수 n을 입력받아 1부터 n까지 합 구하기 (재귀함수 사용)
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