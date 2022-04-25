#include <stdio.h>

myabs(int a)
{
    if (0>a)
    {
        return -a;
    }
    return a;

}
main()
{
    int a;
    scanf("%d", &a);
    printf("%d", myabs(a));
}
