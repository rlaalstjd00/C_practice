#define _CRT_SECURE_NO_WARNINGS

# include <stdio.h>

/*
	두 개의 양의 정수를 입력받아, 최대공약수를 유클리드 호제법으로 계산하기 (재귀함수)

	[입력 예시]
	12 8

	[출력 예시]
	4
*/

int rec(int a, int b) {
	if (b<=0) {
		return a;
	}
	rec(b, a%b);
}

int main() {
	int a,b;
	scanf("%d %d", &a, &b);
	printf("%d", rec(a, b));
	return 0;
}

