#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long int fact(int n) {
    int val;
    if (n <= 1) {
        printf("\n fact(1) 함수 호출!");
        printf("\n fact(1) 값 1 반환!!");
        return 1;
    }
    else {
        printf("\n fact(%d) 함수 호출!",n);
        val = (n * fact(n - 1));
        printf("\n fact(%d) 값 %d 반환!!",n,val);
        return val;
    }
}


int main() {
    int i,result;
    printf("정수를 입력하세요: ");
    scanf("%d", &i);
    result = fact(i);

    printf("\n\n\n %d의 팩토리얼 값은 %d입니다.", i, result);
    getchar();
}