#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> 

/*

n���� ������ �Է¹޾� (n<=20) �ִ� ���ϱ� (����Լ� ���)

[�Է¿���]

5
4 1 8 3 7

[��¿���]

8

*/

int rec(int arr[], int idx, int n, int max) {
	if (idx == n) {
		return max;
	}

	if (arr[idx] > max) {
		max = arr[idx];
		return rec(arr, idx + 1, n, max);
	}
	else {
		return rec(arr, idx + 1, n, max);
	}
}

int main() {
	int arr[20];
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	printf("%d", rec(arr, 0, n, 0));
	return 0;
}