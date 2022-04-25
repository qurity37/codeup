
#include <stdio.h>
int main(void) 
{
	int a[11] = { NULL };
	long long int b, result = 0, c = 10000000000, f[11] = {NULL};

		scanf("%lld",&b);
		
		for (int i = 0; i <= 10; i++)
		{
			f[i] = b / c;
			a[i] = b / c-(f[i-1]*10);
			c = c / 10;
			
		}
		for (int i = 1; i <= 10; i++)
		{
			result = result + a[i];

		}
	
	if (result%7==4)
	{
		printf("suspect");
	}
	else
	{
		printf("citizen");
	}

}

