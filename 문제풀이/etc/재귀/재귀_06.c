#define _CRT_SECURE_NO_WARNINGS

# include <stdio.h>
# include <string.h>

/*
	���� ���� ���� ���ڿ��� �Է¹޾�, Ư�� ������ ���� Ƚ�� ã�� (����Լ� ���)
	���ڿ� ���̴� �ִ� 100

	[�Է� ����]
	HelloWorld	-> �Է� ���ڿ�
	o			-> �˻��� ����

	[��� ����]
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

