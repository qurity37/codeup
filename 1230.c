#include <stdio.h>

int  main()
{
	int a, b, c, d;


	scanf("%d %d %d", &a, &b, &c);

	if (a<=170)
	{
		printf("CRASH ");
		printf("%d",a);
		goto result;
	}
	if (b<=170)
	{
		printf("CRASH ");
		printf("%d", b);
		goto result;
	}
	if (c<=170)
	{
		printf("CRASH ");
		printf("%d", c);
		goto result;
	}
	printf("PASS");

	result:
	return 0;

}
