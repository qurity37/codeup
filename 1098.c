#include <stdio.h>
int main()
{
    int h = 0, w = 0, n = 0, i = 0, x = 0, y = 0, k = 0, d = 0, j = 0;
    int z[101][101] = { 0 };
    scanf("%d %d", &h, &w);


    scanf("%d", &n);

    for (k = 1; k <= n; k++)
    {
        scanf("%d %d %d %d", &i, &d, &x, &y);
        z[x][y] = 1;
        if (d == 0) {
            for (j = 1; j < i; j++)
            {
                z[x][y + j] = 1;
            }
        }
        else {
            for (j = 1; j < i; j++)
            {
                z[x + j][y] = 1;
            }
        }
    }
    for (i = 1 ;i <= h; i++)
    {
        for (j = 1; j <= w; j++)
        {
            printf("%d ", z[i][j]);
        }
        printf("\n");
    }

}


