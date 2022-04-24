 #include <stdio.h>
   int main(void)
   {
	   int a;

	   scanf("%d",&a);
   start:
	   if (a!=0)
	   {

		   printf("%d\n",a);
		   a--;
		   goto start;
		   
	   }
   }
