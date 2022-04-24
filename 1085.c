	   #include <stdio.h>
	   int main(void)
	   {
		   long long int h, b, c, s;
		   double result = 0;
		   scanf("%lld %lld %lld %lld", &h, &b, &c, &s);
		   result = h * b * c * s;
		   printf("%.1f MB", result/8/1024/1024);
			 }
