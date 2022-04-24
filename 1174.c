#include <stdio.h>

int  main()
{
	int a, b=0;
	
	scanf("%d %d",&a,&b);

	for (a; b < 30 && a == 0; b)
	{
		b = b + 60;
		a = a +23;
	}
	for ( b; b < 30&&a !=0; b)
	{
		b= b + 60;
		a= a - 1;
		break;
	}
	
	printf("%d %d", a, b-30);
}
