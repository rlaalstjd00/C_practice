#define _CRT_SECURE_NO_WARNINGS

# include <stdio.h>

/*
	�ϳ��� ž �����ϱ� (����Լ� �̿�)
	�� ���� ���� A,B,C �� �ְ� ������ �ٸ� n>0 ���� ������ A�� �׿����� ��, ��� ������ C�� �ű��
	
	����
	- �� ���� ������ ���� ���� �ִ� �� ���� ���ݸ� �̵� ����
	- ������ ū ������ ���� ���� ���� ���� �� ����
	- ���� ������ ���� �������� ��� ����
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

