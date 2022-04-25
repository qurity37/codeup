#include<stdio.h>
#include <string.h>
int main(void)
{
	char a[11];
	int r[11] = {NULL},sum=0;
	scanf("%s", a);
	for (int i = 0; i < 10; i++)
	{
		sum += (a[i] - 48);
	}
	if (sum%7==4)
	{
		printf("Bad");
	}
	else
	{
		printf("Good");
	}
}
