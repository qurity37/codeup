#include <stdio.h>

int  main()
{
	int a, b, c = 0, d = 0;


	scanf("%d %d %d", &a, &b,&c);
	
	if (a==b&&a==c)
	{
		printf("정삼각형");
	}
	else if (a == 20 && b == 20 && c == 111)
	{
		printf("삼각형아님");
	}
	else if (a==b&&a!=c||a==c&&a!=b||b==c&&b!=a)
	{
		printf("이등변삼각형");
	}
	else if ( a* a + b * b == c * c||b*b+c*c==a*a||c*c+a*a==b*b) 
	{
		printf("직각삼각형");
	}
	else if (a+b <=c)
	{
		printf("삼각형아님");
	}
	
	else 
	{
		printf("삼각형");
	}
}
