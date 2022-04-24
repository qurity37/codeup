	   #include <stdio.h>
	   int main(void)
	   {
		   long long int a, m,d,n,i=0,result=0;

		   scanf("%lld %lld %lld %lld",&a,&m,&d,&n);
		   result = a;
		   for ( i=1 ; i < n; i++)
		   {
			   result = result * m;
			   
			   result = result + d;
			   
		   }
		   printf("%lld", result);
 }
