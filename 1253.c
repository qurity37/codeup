	#include <stdio.h>

	int  main()
	{
		int a,b,c=0,d=0;
		scanf("%d %d", &a,&b);

		if (a<b)
		{
			for (int i = a; i <= b; i++)
			{
				printf("%d ", i);
			}
		}
		else if (a>b)
		
		{
			c = b;
			d = a;
			for (int i = c; i <= d; i++)
			{
				printf("%d ", i);
			}
		}
		else if(a==1 && b==1)
		{
			printf("1");
		}
	}
