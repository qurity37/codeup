#include <stdio.h>

long long int n;



int sqrt(long long int N) {
    long long int temp = 0;
    for (long long int i = 0; i <= N; i++) {
        if (i * i > N) {
            break;
        }
        else {
            temp = i;
        }
    }
    return temp;
}
int main()
{
  scanf("%lld", &n);
  printf("%d\n", sqrt(n));
  return 0;
}
