#include <stdio.h>

int  main()
{
	int a, b, c , d = 0;
	

	
	

	scanf("%d %d %d %d",&a,&b,&c,&d);
	
	if (a==0 &&b==0&&c==0&&d==0)
	{
		printf("모");
	}
	else if (a==1)
	{
		if (b==1||c==1||d==1)
		{
			if (b==1&&c==1&&d==1)
			{
				printf("윷");
			}
			else
			{
				if (b==1&&c==1&&d==0||b==1&&d==1&&c==0||c==1&&d==1&&b==0)
				{
					printf("걸");
				}
				else
				{
					if (b==1&&c==0&&d==0||b==0&&c==1&&d==0||b==0&&c==0&&d==1)
					{
						printf("개");
					}
				}
			}
		}
		else
		{
			printf("도");
		}
	}
	else if (b == 1)
	{
		if (a == 1 || c == 1 || d == 1)
		{
			if (a == 1 && c == 1 && d == 1)
			{
				printf("윷");
			}
			else
			{
				if (a == 1 && c == 1 && d == 0 || a == 1 && d == 1 && c == 0 || c == 1 && d == 1 && a == 0)
				{
					printf("걸");
				}
				else
				{
					if (a == 1 && c == 0 && d == 0 || a == 0 && c == 1 && d == 0 || a == 0 && c == 0 && d == 1)
					{
						printf("개");
					}
				}
			}
		}
		else
		{
			printf("도");
		}
	}
	else if (c == 1)
	{
		if (b == 1 || a == 1 || d == 1)
		{
			if (b == 1 && a == 1 && d == 1)
			{
				printf("윷");
			}
			else
			{
				if (b == 1 && a == 1 && d == 0 || b == 1 && d == 1 && a == 0 || a == 1 && d == 1 && b == 0)
				{
					printf("걸");
				}
				else
				{
					if (b == 1 && a == 0 && d == 0 || b == 0 && a == 1 && d == 0 || b == 0 && a == 0 && d == 1)
					{
						printf("개");
					}
				}
			}
		}
		else
		{
			printf("도");
		}
	}
	else if (d == 1)
	{
		if (b == 1 || c == 1 || a == 1)
		{
			if (b == 1 && c == 1 && a == 1)
			{
				printf("윷");
			}
			else
			{
				if (b == 1 && c == 1 && a == 0 || b == 1 && a == 1 && c == 0 || c == 1 && a == 1 && b == 0)
				{
					printf("걸");
				}
				else
				{
					if (b == 1 && c == 0 && a == 0 || b == 0 && c == 1 && a == 0 || b == 0 && c == 0 && a == 1)
					{
						printf("개");
					}
				}
			}
		}
		else
		{
			printf("도");
		}
	}
}
