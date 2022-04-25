
#include <stdio.h>
#include <string.h>
int main(void)
{
	
	int a,i,result=0;
	scanf("%d",&a);

	for (int i = 1; i <= a; i++)
	{
		for (int j = 1; j <=i; j++)
		{
			result = result + j;
		}
	}
	printf("%d", result);
	
		
}

