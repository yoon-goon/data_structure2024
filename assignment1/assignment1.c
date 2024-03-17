#include <stdio.h>

int main(void)
{
	char* ptr[4] = { "Korea","Seoul","Mapo","152번지 2/3" };

	printf("%s\n%s\n%s\n%s\n", ptr[0], ptr[1], ptr[2], ptr[3]);

	return 0;

}
