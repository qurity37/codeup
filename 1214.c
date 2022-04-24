#include <stdio.h>

int  main()
{
	int a, b, c = 0, d = 0;


	scanf("%d %d", &a, &b);
	if (a %400 ==0 || a % 4==0 && a % 100 !=0)
	{
		switch (b)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("31");
			break;
		case 2:
			printf("29");
			break;
		default:
			printf("30");
			break;
		}
	}
	else
	{
		switch (b)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("31");
			break;
		case 2:
			printf("28");
			break;
		default:
			printf("30");
			break;
		}
	}
}
