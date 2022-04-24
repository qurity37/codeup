        #include <stdio.h>
	   int main(void)
	   {

		   int a[20][20] = {NULL};
			int c,i,j,k,b,d;

		   scanf("%d",&c);
		   for ( i = 1; i <= c; i++)
		   {
			   scanf("%d %d",&d, &b);
			   a[d][b] = 1;
			   
		   }
		   for (j = 1; j <= 19; j++)
		   {

			   for (k = 1; k <= 19; k++)
			   {
				   printf("%d ", a[j][k]);
			   }
			   printf("\n");
		   }
		   
		  			 } 

