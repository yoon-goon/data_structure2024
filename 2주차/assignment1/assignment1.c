#include <stdio.h>

int main(void)
{
	char* ptr[4] = { "Korea","Seoul","Mapo","152번지 2/3" };

	printf("%s\n%s\n%s\n%s\n\n\n", ptr[0], ptr[1], ptr[2], ptr[3]);

    char* ptr_second[4] = { "Korea","Seoul","Jongno","152번지 2/3" };

    printf("%s\n%s\n%s\n%s\n", ptr_second[0], ptr_second[1], ptr_second[2], ptr_second[3]);

	return 0;

}
