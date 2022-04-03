#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> 

/*
	n(3<=n<=100) ���� ������ �̷���� ���� result �� "������ ����" �� ���� ��ȯ�� ��� ���

	������ ������ 3 7 4 5 0 4 �� �� -> ������� �迭�� (3,7) (4,5) (0,4) ������ ������ �ݴ�� �ٲ�
	( (3,7) ������ ������ ����� (4,5) ������ ������ �� �� ����� (0,4) ������ ������ )
	
	��½� ������ �� �ٿ� ����ϵ�, ���� �� �տ� ������ �ϳ� ���

	[�Է� ����1]
	10	-> ������ ����
	3 81 9 12 0 -9 36 33 91 10	-> ����
	3	-> ������ ������ ����
	3 7 4 5 0 4	-> ������ ���� ����

	[��� ����1]
	 -9 33 9 81 3 36 0 12 91 10


	[�Է� ����2]
	6
	30 10 20 0 40 50
	2
	1 2 0 3

	[��� ����2]
	 0 10 20 30 40 50
*/
int result[100];
int revScope[200];

void reverse(int arr[], int from, int to) {
	int len = sizeof(arr) / sizeof(int);
	while (from < to) {
		int tmp = arr[from];
		arr[from] = arr[to];
		arr[to] = tmp;

		from++;
		to--;
	}

	for (int i = 0; i < len; i++) {
		result[i] = arr[i];
	}
}

int main() {
	int n, k;
	int m = 0;

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &result[i]);
	}
	scanf("%d", &k);
	for (int i = 0; i < (k * 2); i++) {
		scanf("%d", &revScope[i]);
	}

	for (int i = 0; i < k; i++) {
		reverse(result, revScope[m],revScope[m+1]);
		m += 2;
	}

	for (int i = 0; i < n; i++) {
		printf(" %d", result[i]);
	}
	return 0;
}