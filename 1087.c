	   #include <stdio.h>
	   int main(void)
	   {
		   int a, i,result=0;

		   scanf("%d",&a);
		   for ( i = 1; result <= a && result != a; i++)
		   {
			   result = result + i;
		   }
		   printf("%d", result);
			 }