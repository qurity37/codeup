#include "stdio.h"
int number[10000000] = { NULL };

int main(void)
{
    int n, temp = 0, f, temp2 = 0;
    
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
        scanf("%d",&temp);
        number[temp] = 1;
    }
    scanf("%d", &f);

    for (int i = 1; i <= f; i++)
    {
        scanf("%d",&temp2);
        printf("%d ", number[temp2]);
    }
}


