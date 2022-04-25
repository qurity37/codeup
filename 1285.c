#include <stdio.h>
int main() {

	char a;
	int b,result=0;

	scanf("%d",&b);
	result = b;
	for (int i = 0;; i++)
	{
		scanf("%c", &a);

		if (a=='+')
		{
			scanf("%d", &b);
			result = result + b;
		}
		else if (a=='-')
		{
			scanf("%d", &b);
			result = result - b;
		}
		else if (a=='*')
		{
			scanf("%d", &b);
			result = result * b;
		}
		else if (a=='/')
		{
			scanf("%d", &b);
			result = result / b;
		}
		else if (a=='=')
		{
			printf("%d", result);
			return 0;
		}
	}

}
