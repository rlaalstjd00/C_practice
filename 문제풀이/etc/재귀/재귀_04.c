#define _CRT_SECURE_NO_WARNINGS

# include <stdio.h>

/*
	하노이 탑 구현하기 (재귀함수 이용)
	세 개의 말뚝 A,B,C 가 있고 직경이 다른 n>0 개의 원반이 A에 쌓여있을 때, 모든 원반을 C로 옮기기
	
	조건
	- 한 번에 말뚝의 가장 위에 있는 한 개의 원반만 이동 가능
	- 직경이 큰 원반은 작은 원반 위에 놓일 수 없음
	- 남은 말뚝을 보조 말뚝으로 사용 가능
*/

void rec(int n, char from, char tmp, char to) {
	if (n == 1) {
		printf("%c %c\n", from, to);
	}
	else {
		rec(n - 1, from, to, tmp);
		printf("%c %c\n", from, to);
		rec(n - 1, tmp, from, to);
	}
}

int main() {
	int n;
	scanf("%d", &n);
	rec(n, 'A', 'B', 'C');
	return 0;
}

