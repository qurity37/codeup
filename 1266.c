#include <stdio.h>

int  main()
{
    int i, n, a,result=0;

    scanf("%d", &n);

    for (i = 1; i <= n; i++)

    {

        scanf("%d", &a);

        result = result + a;
    }
    printf("%d", result);
}
