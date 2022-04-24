#include <stdio.h>

int  main()
{
	int a, b,c=0,d=0;
		

	scanf("%d %d",&a,&b);
	
	switch (a)
	{
	case 1:
		c = 400;
		break;
	case 2:
		c = 340;
		break;
	case 3:
		c = 170;
		break;
	case 4:
		c = 100;
		break;
	case 5:
		c = 70;
		break;
	default:
		break;
	}
	switch (b)
	{
	case 1:
		d = 400;
		break;
	case 2:
		d = 340;
		break;
	case 3:
		d = 170;
		break;
	case 4:
		d = 100;
		break;
	case 5:
		d = 70;
		break;
	default:
		break;
	}

	if (c+d>500)
	{
		printf("angry");
	}
	else
	{
		printf("no angry");
	}
}
