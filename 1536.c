#include <stdio.h>

int n;

long long int d[110];


f() {
    long long int a = 3728000523;
    for (int i = 1; i <= n; i++)
    if (a>d[i]&&d[i]!=0)
    {
        a = d[i];
    }
    
    return a;
}
int main()
{
  scanf("%d", &n);

  for(int i=1; i<=n; i++)
    scanf("%lld", &d[i]);

  printf("%lld", f());
  return 0;
}
