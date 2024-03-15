#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char a[100]; 
    int len = 0;

    printf("문자열을 입력하세요:");
    scanf("%s", a);

    for (int i = 0; a[i] != '\0'; ++i) {
        len++;
    }

    printf("\n\n입력한 문자열은\n\"%s\"\n입니다.\n\n", a);
    printf("입력된 문자열의 길이=%d\n", len);

    return 0;
}