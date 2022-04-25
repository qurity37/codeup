#include <stdio.h>
void f(int a,int b,long long int result,int c)
{
	if (a==1 || b==0 || (b%2==0 && a==-1))
	{
		printf("%d",1);
	}
	else if (a==-1)
	{
		printf("%d",-1);
	}
  else if (c==b+1)
	{
		printf("%lld",result);
	}
	else
	{
		result *= a;
		c++;
		f(a, b, result, c);
	}
}
int main()
{
	int a, b,c=2;
	long long int result;
	scanf("%d %d",&a,&b);
	result = a;
	
	f(a, b, result, c);
}
