#include <stdio.h>
#include <string.h>
int main(void)
{
	char a[101] = {},c=0,f=0,d=0;

	fgets(a,101,stdin);
	c=strlen(a);
	for (int i = c-1; i >= 0; i--)
	{
		printf("%c",a[i]);
	}
	
}
