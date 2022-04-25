#include <stdio.h>
 ABS( double a)
{
	if (0>a)
	{
		if (-100000 >a)
		{
			printf("%.10g", -a);
		}
		else
		{
			printf("%g", -a);
		}

	}
	else
	{
		if (100000 < a)
		{
			printf("%.10g", a);
		}
		else
		{
			printf("%g", a);
		}
	}
	
}
int main() {
	double a;
	scanf("%lf",&a);
	ABS(a);
}
