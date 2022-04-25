#include<stdio.h>
#include <string.h>
char a[1000];
f( int i,int j)
{
	if (a[0]=='0')
	{
		printf("0");
		return 0;
	}
	if (i==-1)
	{

	}
	else
	{
		if (a[j] == '0')
		{
			i--;
			j--;
			f(i, j);
		}
		else
		{
			printf("%c", a[i]);
			i--;
			f(i, j);
		}
		
	}
}
int main()
{
	int i,j;
	scanf("%s", a);
	i = strlen(a) - 1;
	j = i;
	f(i,j);
}
