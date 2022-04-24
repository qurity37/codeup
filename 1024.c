#include <stdio.h>
int main(void)
{
	char a[30];
	scanf("%s", &a[0]);
	for (int i = 0; a[i]!='\0'; i++)
	{
		printf("\'%c\'\n",a[i]);
	}
}	
