 #include <stdio.h>
   int main(void)
   {
	   int a,i=1;
   
	   scanf("%d",&a);
   start:
	   if (a!=0)
	   {
		   scanf("%d", &i);
		   printf("%d\n",i);
		   --a;
		   
		   goto start;
		   
	   }
	
   }