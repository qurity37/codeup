
#include <stdio.h>
#include <math.h>
int main(void) 
{
	double a,result;

	scanf("%lf",&a);

	result = a / 4;
	
	printf("%.0lf", floor(result * result));
	
}

