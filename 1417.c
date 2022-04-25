#include <stdio.h>

int main() {
    int n, m,c=0,temp=0;
    int a[10001] = { NULL };
   

    for (int i = 1; i <= 10; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 1; i<=10; i++)
    {
        for (int j = 1; j <= 9 ; j++)
        {


            if (a[j] > a[j + 1]&&  a[j]!= 0)
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    
        printf("%d ",a[8]);

    
    return 0;
}
