	   #include <stdio.h>
	   int main(void)
	   {
		   long long int w, h, b;
		   double result = 0;
		   scanf("%lld %lld %lld", &w, &h, &b);
		   result = w * h * b;


		   printf("%.2f MB", result / 8 / 1024 / 1024);
			 }
