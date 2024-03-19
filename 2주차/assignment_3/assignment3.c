#include <stdio.h>

void main() {
	char arr[2][3][20];
	int i, j, k;
	
	for (i = 0; i < 2; i++) {
		printf("\n 학생 %d의 이름 : ", i + 1);
		gets(arr[i][0]);
		printf(" 학생 %d의 학과 : ", i + 1);
		gets(arr[i][1]);
		printf(" 학생 %d의 학번 : ", i + 1);
		gets(arr[i][2]);

	}



	for (i = 0; i < 2; i++) {
		printf("\n\n 학생%d", i + 1);
		for (j = 0; j < 3; j++) {
			printf("\n\t");
			for (k = 0; arr[i][j][k] != '\0'; k++) {
				printf("%c", arr[i][j][k]);
			}
		}
	}
	getchar();
}