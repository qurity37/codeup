#include <stdio.h>
#include <string.h>
char a[1000] = { 0 };
f()
{

		if (a[0] == '3' || a[0] == '6' || a[0] == '9')
		{
			printf("K");
			if (a[1] == '3' || a[1] == '6' || a[1] == '9')
			{
				printf("K");
				if (a[2] == '3' || a[2] == '6' || a[2] == '9')
				{
					printf("K");
				}
			}
			else
			{
				if (a[2] == '3' || a[2] == '6' || a[2] == '9')
				{
					printf("K");
				}
			}
		}
		else
		{
			if (a[1] == '3' || a[1] == '6' || a[1] == '9')
			{
				printf("K");
				if (a[2] == '3' || a[2] == '6' || a[2] == '9')
				{
					printf("K");
				}
			}
			else
			{
				if (a[2] == '3' || a[2] == '6' || a[2] == '9')
				{
					printf("K");
				}
				else
				{
					printf("%s", a);
				}
			}
		}
	
	
}
int main()
{

	gets(a);
	f();
}
