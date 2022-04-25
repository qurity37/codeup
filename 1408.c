
#include <stdio.h>
#include <string.h>
int main(void)
{
	char a[21] = { 0 }, b[21] = {0};
	int i;
	gets(a);

	for ( i = 0; a[i] != 0; i++)
	{
		printf("%c", a[i]+2);
	}
	
	printf("\n");
	for (i = 0; a[i] != 0; i++)
	{
		printf("%c", (a[i] * 7) % 80 + 48);
	}
	
		
}

