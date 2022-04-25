#include <stdio.h>

mymin(int a, int b)
{
    if (a>b)
    {
        return b;
    }
    else
    {
        return a;
    }
}
main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", mymin(a, b));
}
