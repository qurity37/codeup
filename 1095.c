	   #include <stdio.h>
	   int main(void)
	   {

		   int n, i, t,result=24;
		   int a[10000] = { NULL };
		   scanf("%d", &n);
		   for (i = 1; i <= n; i++) 
		   {
			   scanf("%d", &a[i]);
			    
		   }
		   for (i = 1; i <= n; i++)
		   {
			   if (a[i]<result)
			   {
				   result = a[i];
			   }

		   }
		   printf("%d",result);

			 }
