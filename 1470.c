#include "stdio.h"


int main(void)
{
    int num[101][101] = { NULL };
    int n,m=1;


    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
        if (i%2==1)
        {
            for (int j = 1; j <= n; j++)
            {

                num[j][i] = m;
                m++;
            }
        }
        else
        {
            for (int j = n; j>=1; j--)
            {
                num[j][i] = m;
                m++;
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%d " ,num[i][j]);
        }
        printf("\n");
    }
    return 0;
}


