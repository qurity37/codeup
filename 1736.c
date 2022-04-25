#include <stdio.h>
f(int a,int d ,int h,int m ,int s)
{
	if (86400<= a)
	{
		d++;
		a -= 86400;
	}
	else if (3600 <= a)
	{
		h++;
		a -= 3600;
	}
	else if (60 <=a)
	{
		m++;
		a -= 60;
	}
	else
	{
		s++;
		a -= 1;
	}

	if (a==0)
	{
		printf("%d %d %d %d",d, h, m, s);
	}
	else
	{
		f(a, d, h, m, s);
	}

}
int main()
{
	int a,d=0,h=0,m=0,s=0;

	scanf("%d",&a);
	f(a,d,h,m,s);
}
