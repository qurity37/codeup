
#include <stdio.h>
int main(void) 
{
	int a,c=0;
	
	scanf("%d",&a);
		
	for (int i = 2; i <= a; i++)
	{
		if (a%i==0)
		{
			c++;
		}
	}
	printf("%d", c);
}

