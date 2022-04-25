#include <stdio.h>

int main()
{
	char a[101] = { 0 } ,b[101] = { 0 };

	int m=0, n=0;

		scanf("%s", a);
		scanf("%s", b);

		for (int i = 0; a[i] !=0 ; i++)
		{
			m++;
		}
		for (int i = 0; b[i] != 0; i++)
		{
			n++;
		}
		
		if (m==n)
		{
			for (int i = 0; b[i] !=0; i++)
			{
				if (a[i] > b[i])
				{
					printf("%s %s", b, a);
					return 0;
				}
				else if (a[i] <b[i])
				{
					printf("%s %s", a, b);
					return 0;
				}
			}
			
		}
		else if(m>n)
		{
			printf("%s %s", b, a);
			return 0;
		}
		else if (m<n)
		{
			printf("%s %s", a, b);
			return 0;
		}
	
	
}
