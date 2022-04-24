   #include <stdio.h>
   int main(void)
   {
	   int a,i;
	   scanf("%d",&a);
	   for ( i = 1; i <= a; i++)
	   {
		   if (i%3==0||i%6==0)
		   {
			   if (i>=33 && i<=39 &&  (i % 3 == 0 || i % 6 == 0))
			   {
				   printf("XX ");
			   }
			   else if (i >= 63 && i <= 69 && (i % 3 == 0 || i % 6 == 0))
			   {
				   printf("XX ");
			   }
			   if (i >= 93 && i <= 99 && (i % 3 == 0 || i % 6 == 0))
			   {
				   printf("XX ");
			   }
			   else
			   {
				   printf("X ");
			   }
			   
		   }
		   else
		   {
			   printf("%d ",i);

		   }
		    }
	     }
