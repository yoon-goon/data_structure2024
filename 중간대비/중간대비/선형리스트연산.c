#include <stdio.h>

int main() // 선형리스트 연산 알고리즘
{
    //선형리스트 삽입 위치찾기
    for (i = 0; i < n; i++) {
        if (L[i] <= x && x <= L[i + 1]) {
            k = i + 1;
            break;
        }
    }

    // 마지막원소부터 k+1 까지 뒤로자리이동
    for (i = n; i > k; i--) {
        L[i] = L[i - 1];
        move++;
    }

    L[k] = x; //자리이동하여 만든 자리에 삽입원소 저장


    //K+1 부터 마지막 원소까지 앞으로 자리이동
    for (i = k; i < n; i++) {
        L[i] = L[i + 1];
        move++;
    }

    return move;
}



{

    // 선형리스트 연산 알고리즘
    {
        //선형리스트 삽입 위치찾기
        for (i = 0; i < n; i++) {
            if (L[i] <= x && x <= L[i + 1]) {
                k = i + 1;
                break;
            }
        }
        

        // 마지막원소부터 k+1 까지 뒤로자리이동
        for (i = n; i > k; i--) {
            L[i] = l[i - 1];
            move++;
        }

         //자리이동하여 만든 자리에 삽입원소 저장

        L[k] = x;

        //K+1 부터 마지막 원소까지 앞으로 자리이동
        
        for (i = k; i < n; i++) {
            L[i] = L[i + 1];
            move++
        }





    return 0;
}


// 원형 첫번째 노드 삽입 공백 아닌경우
    {
        else {
        temp = CL->head;
        


        {
     