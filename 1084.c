	   #include <stdio.h>
	   int main(void)
	   {
		   int r, g, b, i, j, k,f=0;

		   scanf("%d %d %d", &r, &g, &b);

		   for ( i = 0; i < r; i++)
		   {
		  
			   for ( j = 0; j < g; j++)
			   {
			 
				   for ( k = 0; k < b; k++)
				   {
					   f++;
					   printf("%d %d %d\n",i,j,k);
				   
				   }
			   }
		   
		   }
		   printf("%d", f);
			 }
