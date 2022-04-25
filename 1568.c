#include <stdio.h>

int n, a, b, d[1010];
maxi(int a,int b)
{
    long long int k = 0,max = -2147483641;
    if (d[a]== -2147483647)
    {
        return 1;
    }
    for (int i = a; i <= b; i++)
    {
        if (d[i]>max)
        {
            max = d[i];
            k = i;
        }
    }
    return k;
}
int main()
{
  scanf("%d", &n);

  for(int i=1; i<=n; i++)
    scanf("%d", &d[i]);

  scanf("%d%d", &a, &b);

  printf("%d\n", maxi(a, b));
}
