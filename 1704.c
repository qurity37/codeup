#include <stdio.h>

int main() {
	
	int a,b,age = 0;
	scanf("%d %d", &a, &b);
	a /=  10000;
	b /= 1000000;
	if (b==1||b==2)
	{
		if (b == 1)
		{
			printf("%d M", 100 - a + 13);
		}
		else
		{
			printf("%d F", 100 - a + 13);
		}
	}
	else
	{
		
			if (b == 3)
			{
				printf("%d M", 13 -a);
			}
			else
			{
				printf("%d F", 13 -a);
			}
		
		
	}
}
