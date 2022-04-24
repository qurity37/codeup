#include <stdio.h>

int  main()
{
	int a, b=0;
	char c[5] = {NULL};
	scanf("%c",&c[0]);
	scanf("%d",&a);
	scanf("%c",&c[1]);
	scanf("%d",&b);

	printf("%d", a*12 + b*1);
	
}
