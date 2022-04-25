#include <stdio.h>
#define MAX_STR_SIZE 101
#include <string.h>
int n;

int main()
{
	int a;
	char b[MAX_STR_SIZE];
	scanf("%d",&a);
	for (int i = 0; i <=  a; i++)
	{
		gets(b);
		for (int j = strlen(b)-1; j >= 0; j--)
		{
			printf("%c", b[j]);	
			if (j==0)
			{
				printf("\n");
			}
		}
	}

}
