#define _CRT_SECURE_NO_WARNINGS

# include <stdio.h>

/*
	�� ���� ���� ������ �Է¹޾�, �ִ������� ��Ŭ���� ȣ�������� ����ϱ� (����Լ�)

	[�Է� ����]
	12 8

	[��� ����]
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

