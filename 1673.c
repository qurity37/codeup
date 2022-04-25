#include <stdio.h>
int main() {
	int a,b,c,r;

	scanf("%d %d %d",&a,&b,&c);
	if (a==b&&b==c)
	{
		printf("%d", a);
		return 0;
	}
	for (int i = 1; i < (a+b+c)/3; i++)
	{
		if (a % i == 0 && b % i == 0 && c % i == 0)
		{
			r = i;
		}
	}
	printf("%d",r);
}
