#include <stdio.h>

int  main()
{
	int a, b, c = 0, d = 0;
	float max[10] = {0};

	
	

	scanf("%d %d",&a,&b);
	if (max[0] < a + b)
	{
		max[0] = a + b;
	}
	if (max[0] < b + a)
	{
		max[0] = b + a;
	}
	if (max[0] < a - b)
	{
		max[0] = a - b;
	}
	if (max[0] < b - a)
	{
		max[0] = b - a;
	}
	if (max[0] < a*b)
	{
		max[0] = a * b;
	}
	if (max[0] < b*a)
	{
		max[0] = b * a;
	}
	if (max[0]< a/b)
	{
		max[0] = a / b;
	}
	if (max[0]< b/a)
	{
		max[0] = b / a;
	}
	c = a;
	for (int i = 1; i < b; i++)
	{
		c = c * a;

	}
	if (max[0 <c])
	{
		max[0] = c;
	}
	d = b;
	for (int i = 1; i < a; i++)
	{
		d = d * b;

	}
	if (max[0] < d)
	{
		max[0] = d;
	}
	if (a == -1 && b == -1)
	{
		max[0] = 1;
	}
	if(a==-1 &&b==1)
	{
	    max[0] = 2;
	}
	printf("%.6f", max[0]);

}
