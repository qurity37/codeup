#include <stdio.h>

int n;



char grade()
{
	if (n >=90 &&n <=100)
	{
		return 'A';
	}
	else if (n >= 80 && n < 90)
	{
		return 'B';
	}
	else if (n >= 70 && n < 80)
	{
		return 'C';
	}
	else  if(n >= 60 && n < 70)
	{
		return 'D';
	}
	else if (n < 60)
	{
		return 'F';
	}
}
int main()
{
  scanf("%d", &n);
  printf("%c", grade(n));
  return 0;
}
