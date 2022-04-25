#include <stdio.h>

myswap(int *a, int *b)
{
    int temp = 0;
    
    if (*a > *b)
    {
        temp = *a;
        *a = *b;
        *b = temp;
        
    }

    
    
}
main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    myswap(&a, &b);
    printf("%d %d", a, b);
}
