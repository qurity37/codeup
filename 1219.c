#include <stdio.h>

int  main()
{
	double a, b=0,c,bmi=0,result=0;
	
	scanf("%lf %lf",&a,&b);

	if (a < 150)
	{
		result = a - 100;
	}
	else if (a>=150&& a<160)
	{
		result = (a - 150) / 2 + 50;
	}
	else if (a>=160)
	{
		result = (a - 100) * 0.9;
	}
	
	bmi = (b - result) * 100 / result;

	if (bmi <= 10)
	{
		printf("정상");
	}
	else if (bmi> 10 &&bmi <= 20)
	{
		printf("과체중");
	}
	else if (bmi > 20)
	{
		printf("비만");
	}
}
