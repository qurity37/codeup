
#include <stdio.h>
#include <string.h> 

int main(void)
{
	char a[1000];
	int b = 0,c=0;
	gets(a);
	for (int i = 0; a[i] != 0; i++)
	{
		if (a[i] != ' ')
		{
			a[c] = a[i];
			c++;
		}
	}
	a[c] = 0;
	c = 0;
	for (int i = 0; a[i] != 0; i++)
	{
			a[c] = a[i];
			c++;
	}
	a[c] = 0;
	printf("%s", a);
	
}
