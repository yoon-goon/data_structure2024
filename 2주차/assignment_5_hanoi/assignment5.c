#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void hanoi(int n, char start, char work, char target)
{
    if (n == 1) {
        printf("\n%c에서 원판 1을 %c로 옮김", start, target);
    }
    else
    {
        hanoi(n - 1, start, target, work);
        printf("\n%c에서 원판 %d을 %c로 옮김", start,n, target);
        hanoi(n - 1, work, start, target);
    }

}

int main()
{
    int num;
    printf("원반 개수를 입력해주세요: ");
    scanf("%d", &num);

    hanoi(num, 'A', 'B', 'C');
}