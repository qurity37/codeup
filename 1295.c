
#include <stdio.h>
#include <string.h>
int main(void) 
{
	char a[1001] = {0};
	int b[1001] = { NULL };
	scanf("%s",a);

	for (int i = 0; i < 1001; i++)
	{
		if (a[i] >= 65 && a[i] <=90)
		{
			a[i] = a[i] + 32;
			
			
		}
		else if(a[i]>=97&&a[i]<=122)
		{
			a[i] = a[i] - 32;
		}
		
	}
	printf("%s",a);
	
}

