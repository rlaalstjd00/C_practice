#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> 

int sum[10];
int a = 0;

void dice(int n, int m) {
    int i, j, k;
    int total = 0;
    for (i = 1; i <= 6;i++) {
        sum[a] = i;
        if (a == n - 1) {
            total = 0;
            for (j = 0; j <= a; ++j) {
                total += sum[j];
            }
            if (total == m) {
                for (k = 0; k < n; ++k) {
                    printf("%d ", sum[k]);
                }
                printf("\n");
                return;
            }
        }
        else {
            a++;
            dice(n, m);
            a--;
        }
    }
}

int main(){
    int m, n;
    scanf("%d %d", &m, &n);
    dice(m, n);

    return 0;
}