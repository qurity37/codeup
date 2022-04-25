
#include <stdio.h>
int main(void) 
{
	int a,b,c=0,d;
	
	scanf("%d %d %d",&a,&b,&c);
		
	for (int i = 1; i <= a; i++)
	{
		if (a%i==0)
		{
			if (b%i==0)
			{
				if (c%i==0)
				{
					d = i;
				}
			}
		}
	}
	printf("%d",d);
}

