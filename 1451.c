#include <stdio.h>

int main() {
    int n, m,c=0,temp=0;
    int a[10001] = { NULL };
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i<n; i++)
    {
        for (int j = 0; j < n-1 ; j++)
        {


            if (a[j] > a[j + 1]&&  a[j]!= 0)
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);

    }
    return 0;
}
