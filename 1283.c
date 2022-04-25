
#include <stdio.h>
int main(void) {
	float a, b = 0, c[11] = {0},result=0,result2=0;
	scanf("%f %f", &a,&b);
	for (int i = 0; i < b; i++)
	{
		scanf("%f",&c[i]);
	}
	result = a;
	for (int i = 0; i < b; i++)
	{
		result = result+result*c[i] / 100;
		
	
	}
	result2 = result - a;
	printf("%.0f\n",result2);
	if (0<result2)
	{
		printf("good");
	}
	else if (0>result2)
	{
		printf("bad");
	}
	else if (0==result2)
	{
		printf("same");
	}
	return 0;
}
