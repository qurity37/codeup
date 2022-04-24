   #include <stdio.h>
   int main(void)
   {
	   int a,b=1,c=0;

	   scanf("%d",&a);
   start:
	   if (a >= b)
	   {
		   if (b % 2 == 0)
		   {
			   
			   c = c + b;
			   b++;
			   goto start;
		   }
		   else
		   {
			   b++;
			   goto start;
		   }
		   
	   }
	   else if (a == 0)
	   {
		   printf("0");
	   }
	   else
	   {
		   printf("%d\n", c);
	   }
   }
