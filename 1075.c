 #include <stdio.h>
   int main(void)
   {
	   int a;

	   scanf("%d",&a);
   start:
	   if (a!=0)
	   {
		   a--;
		   printf("%d\n",a);
		   
		   goto start;
		   
	   }
   }
