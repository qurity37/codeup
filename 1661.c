#include<stdio.h>
#include <string.h>

int main(void)
{
	char a[101];


	gets(a);


	for (int i = 0; i < strlen(a); i++)
	{
		if (a[i]==',')
		{
			a[i] = ' ';
		}
		else if (a[i]== ';')
		{
			printf("\n");
			continue;
		}
		else if (a[i]== ' ')
		{
			continue;
		}
		printf("%c", a[i]);

	}
	

	
}
