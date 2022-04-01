#define _CRT_SECURE_NO_WARNINGS

# include <stdio.h>
# include <string.h>

/*
	공백 없는 영어 문자열을 입력받아, 특정 문자의 출현 횟수 찾기 (재귀함수 사용)
	문자열 길이는 최대 100

	[입력 예시]
	HelloWorld	-> 입력 문자역
	o			-> 검사할 문자

	[출력 예시]
	2		

*/

int rec(char word[], int len, char a) {
	if (len != 0) {
		if (*(word + strlen(word) - 1 - len) == a) {
			return 1 + rec(word, len - 1, a);
		}
		else {
			return 0 + rec(word, len - 1, a);
		}
	}
	else {
		if (*(word + strlen(word) - 1) == a) {
			return 1;
		}
		else {
			return 0;
		}
	}
}

int main() {
	char word[100];
	char a;
	gets(word);
	a = getchar();
	printf("%d\n", rec(word, strlen(word) - 1, a));
	return 0;
}

