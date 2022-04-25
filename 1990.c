#include <stdio.h>
#include <string.h>

char a[100000];
int  b[100000],sum=0;
int main()
{
	int c=0,d=0;
	scanf("%s", a);
	for (int i = 0; i < strlen(a); i++)
	{
		switch (a[i])
		{
		case '1':
			b[i] = 1;
			break;
		case '2':
			b[i] = 2;
			break;
		case '3':
			b[i] = 3;
			break;
		case '4':
			b[i] = 4;
			break;
		case '5':
			b[i] = 5;
			break;
		case '6':
			b[i] = 6;
			break;
		case '7':
			b[i] = 7;
			break;
		case '8':
			b[i] = 8;
			break;
		case '9':
			b[i] = 9;
			break;
		default:
			break;
		}
		
		sum += b[i];
		
	}
	
	if (sum%3==0)
	{
		printf("1");
	}
	else
	{
		printf("0");
		
	}
}
