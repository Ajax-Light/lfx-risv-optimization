/* Make unaligned accesses in memory
*/

#include <stdio.h>

extern void* memset(void*, int, size_t);

int main()
{
	char str[50];

	memset(str, '#', 13);

	str[14] = '\0';

	printf("str now is: %s\n", str);

	return 0;
}
