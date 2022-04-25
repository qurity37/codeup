#include <stdio.h>
#include <string.h>

int f(int a,int i)
{
	if (a==1)
	{
		printf("%d", i);
	}
	else
	{
		if (a%2==0)
		{
			a =a/2;
			i++;
			f(a, i);
		}
		else
		{
			a = a* 3+1;
			i++;
			f(a, i);
		}
		
	}

}
int main()
{
	int a,i=1;

	scanf("%d", &a);

	f(a, i);
}
