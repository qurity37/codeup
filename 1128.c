#include <stdio.h>
int main(void)
{
	float a[5] = { 0 }, result = 0, b[5] = {0};
	for (int i = 1; i <= 3; i++) 
	{
		scanf("%f %f",&a[i], &b[i]);
	}
	result = a[1]*b[1]+a[2]*b[2]+a[3]*b[3];


	printf("%.1f", result);
}
