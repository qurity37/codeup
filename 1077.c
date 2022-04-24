   #include <stdio.h>
   int main(void)
   {
	   int a,b = 0;

	   scanf("%d",&a);
   start:
	   if (a>=b)
	   {

		   printf("%d\n",b);
		   b++;
		   goto start;
		   
	   }
	
   }
