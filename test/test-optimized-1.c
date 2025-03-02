#include <stdio.h>

extern void* memset(void*, int, size_t);

int main()
{
	char str[50];

	memset(str, '#', 10);

	str[10] = '\0';

	printf("str now is: %s\n", str);

	return 0;
}
