	   #include <stdio.h>
	   int main(void)
	   {
		   int a, d,n,r=0,result=0;

		   scanf("%d %d %d",&a,&d,&n);
		   result = a;
		   for ( r=1 ; r < n; r++)
		   {
			   result = result + d;
			   
		   }
		   printf("%d", result);
}