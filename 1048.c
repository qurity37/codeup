#include <stdio.h>
int main(void)
{
    int a,b, c=2,i=0;
    scanf("%d %d", &a, &b);
    for ( i = 1; i < b; i++)
    { c=c*2; }
    if (b==0)
    {printf("1"); }
    else
    { printf("%d", a * c);}
}
