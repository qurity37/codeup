#include <stdio.h>

long long int n;

long long int f(long long int k)
{
   long long int res = 0;
    while (n != 0) {
        res = res * 10 + n % 10;
        n = n / 10;
    }
    return res;
}
int main()
{
  scanf("%lld", &n);
  printf("%lld\n", f(n));
}
