#include <stdio.h>


int main()
{
	int  a,i,result=0;
	int b[1000] = { NULL };

	scanf("%d",&a);
	

	for (i = 1; i <= a; i++)
	{
		scanf("%d",&b[i]);
		
	}

	
	printf("%d %d %d",b[1],b[(a+1)/2],b[a]);
	
}
