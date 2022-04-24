#include <stdio.h>

int  main()
{
	int a, b, c = 0, d = 0;

	
	

	scanf("%d %d",&a,&b);
	
	if (b%a==0)
	{
		printf("%d*%d=%d",a,b/a,b);
	}
	else if (a%b==0)
	{
		printf("%d*%d=%d", b, a / b, a);
	}
	else
	{
		printf("none");
	}
}
