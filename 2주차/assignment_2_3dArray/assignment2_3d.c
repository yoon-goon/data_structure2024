#include <stdio.h>

int main() {
	int arr[2][3][4];
	int num = 0;

	for (int i = 0; i < 2; i++) {
		for (int y = 0; y < 3; y++) {
			for (int x = 0; x < 4; x++) {
				num++;
				arr[i][y][x] = num;
				printf("array[%d][%d][%d] = %d\n", i, y, x, arr[i][y][x]);
			}
		}
	}
	getchar();
}