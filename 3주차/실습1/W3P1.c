#include <time.h>
#include <stdio.h>


int main()
{
	int i;
	double start, end;

	//for 루프 시작 시간
	start = (double)clock() / CLOCKS_PER_SEC;

	//for loop 100000000번 돌아보기 bigO -> N
	int sum = 0;
	for (i = 0; i < 100000000; i++) {
		sum++;
	}

	//for loop end time
	end = (((double)clock()) / CLOCKS_PER_SEC);
	printf("program running time :%lf\n", (end - start));
}