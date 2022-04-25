#include <stdio.h>
#include <math.h>
f(double j, double k)
{
  
   
    printf("%.1lf\n",j/k);
    printf("%.0f\n", floor( j / k));
    printf("%.0lf", pow(j,k));
}
int main()
{
   int b, c;

    scanf("%d %d",&b,&c);
    f(b,c);
}
