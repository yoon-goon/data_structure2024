#include <stdio.h>
#include "stackS.h"

int main(void) {
    element item;
    printf("\n** 순차 스택 연산 **\n");
    printStack();
    push(1); printStack;    // 1push
    push(2); printStack;    // 2push
    push(3); printStack;    // 3push

    item = peek();  printStack();	// 현재 top의 원소 출력
    printf("peek => %d", item);

    item = pop();  printStack();	// 삭제
    printf("\t pop  => %d", item);

    item = pop();  printStack();	// 삭제
    printf("\t pop  => %d", item);

    item = pop();  printStack();	// 삭제
    printf("\t pop  => %d\n", item);

    getchar();  return 0;
}