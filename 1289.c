
#include <stdio.h>
int main(void) 
{
	int a[4] = { NULL }, b[4] = { NULL },result=0;
	
	for (int i = 0; i < 3; i++)
	{
		scanf("%d %d", &a[i], &b[i]);
		if (a[i]*b[i]>result)
		{
			result = a[i] * b[i];
		}
	}
	printf("%d", result);

	
}

