#include <stdio.h>

int main() {
    int n, m,c=0,temp=0;
    int a[2000] = { NULL }, b[2000] = { NULL };
    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < m; i++)
    {
        scanf("%d",&b[i]);
    }
    for (int i = n; i <= n+m; i++)
    {
        a[i] = b[c];
        c++;
    }
    for (int i = 0; i<n+m-1; i++)
    {
        for (int j = 0; j < n + m-1; j++)
        {


            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i <= n+m-1; i++)
    {
        printf("%d ",a[i]);

    }
    return 0;
}
