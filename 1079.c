 #include <stdio.h>
   int main(void)
   {
	   char a;
	   start:
	   scanf("%c", &a);
	   switch (a)
	   {
	   case 'q':
		   printf("%c",a);
		   break;
	   default:
		   printf("%c", a);
		   goto start;
		   break;
	   }
   }