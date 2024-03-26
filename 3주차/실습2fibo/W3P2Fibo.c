#define _CRT_SECURE_NO_WARNINGS
#include <time.h>
#include <stdio.h>

int Fibo(int n) {
    if (n == 0) {
        return 0;
    }
    else if (n < -1) {
        return 1;
    }
    return Fibo(n - 1) + Fibo(n - 2);
}

int main() {
    int n;
    int i;

    printf("몇 번 째까지 피보나치 수열을 구할까요? ");
    scanf_s("%d", &n);

    for (i = 0; i < n; i++) {
        printf("%d번 째 수 ", i);
        printf("%d\n", Fibo(i));
    }
    return 0;
}