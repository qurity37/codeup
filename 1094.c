	   #include <stdio.h>
	   int main(void)
	   {

		   int n, i, t;
		   int a[10000] = {NULL};
		   scanf("%d", &n);
		   for (i = 1; i <= n; i++) 
		   {
			   scanf("%d", &a[i]);
			    
		   }
		   for (i=n; i >= 1; i--)
		   {
			   printf("%d ", a[i]);
		   }

			 }
