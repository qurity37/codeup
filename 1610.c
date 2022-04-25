#include <stdio.h>
char a[101] = { 0 };
f(int j,int k)
{
    for (int i = j; i < j+k; i++)
    {
        printf("%c", a[i]);
    }
}
int main()
{
    int b, c;
    gets(a);
    scanf("%d %d",&b,&c);
    f(b,c);
}
