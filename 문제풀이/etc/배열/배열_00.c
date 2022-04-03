#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> 

/*
	n(3<=n<=100) 개의 정수로 이루어진 수열 result 를 "뒤집기 정보" 에 의해 변환한 결과 출력

	뒤집기 정보가 3 7 4 5 0 4 일 때 -> 순서대로 배열의 (3,7) (4,5) (0,4) 구간의 순서를 반대로 바꿈
	( (3,7) 구간을 뒤집은 결과의 (4,5) 구간을 뒤집고 또 그 결과의 (0,4) 구간을 뒤집음 )
	
	출력시 수열은 한 줄에 출력하되, 줄의 맨 앞에 공백을 하나 출력

	[입력 예시1]
	10	-> 수열의 길이
	3 81 9 12 0 -9 36 33 91 10	-> 수열
	3	-> 뒤집기 정보의 개수
	3 7 4 5 0 4	-> 뒤집기 구간 정보

	[출력 예시1]
	 -9 33 9 81 3 36 0 12 91 10


	[입력 예시2]
	6
	30 10 20 0 40 50
	2
	1 2 0 3

	[출력 에시2]
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