#include <stdio.h>
int main(void)
{
	int si, bun, chu;
	scanf("%d:%d:%d",&si,&bun,&chu);
	if (bun> 10)
	{printf("%d\n",bun);}
	else if(bun > 0)
	{printf("0%d\n",bun);}
	else
	{printf("0\n");}
}	
