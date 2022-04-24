   #include <stdio.h>
   int main(void)
   {
	   char a,b = 'a';

	   scanf("%c",&a);
   start:
	   if (a>=b)
	   {

		   printf("%c ",b);
		   b++;
		   goto start;
		   
	   }

   }
