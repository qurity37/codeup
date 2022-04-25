#include <stdio.h>
#include <string.h>

int main()
{
	char a[50] = { NULL },z=0;

	scanf("%s", &a);

	for (int i = strlen(a) - 1; i >= 0; i--)
	{
		printf("%c", a[i]);
	}

}
