#include <stdio.h>

int  main()
{
	char str[31] = { NULL };


	fgets(str, 31, stdin);

	printf("%s", str);
}
