#include <stdio.h>

int  main()
{
	long long int a, b, c;
	char d;

	scanf("%lld", &a);
	scanf("%c", &d);
	scanf("%lld", &b);
			

	switch (d)
	{
	case '+' :
		printf("%lld",a+b);
		break;
	case '-':
		printf("%lld", a - b);
		break;
	case'*':
		printf("%lld", a * b);
		break;
	case '/':
		printf("%.2f", (float)a / b);
		break;
	default:
		break;
	}
	
	return 0;

}
