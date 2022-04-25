#include <stdio.h>

int n, k, d[1010];
lower_bound(int k)
{
    int low, high, mid;

    low = 1;
    high = n;
    if (k<=d[low])
    {
        return low;
    }
        while (low <= high)
        {
            mid = (low + high) / 2;
            if ( d[mid] == k)
            {
                if (k == d[mid - 1])
                {
                    return mid-1;
                }
                return mid;
            }
            else if (k < d[mid]) {
                high = mid - 1;
                if (k >d[mid-1])
                {
                    return mid;
                }
            }
            else if (k > d[mid]) {
                low = mid + 1;
            }
        }
  
    
    return n +1;
}
int main()
{
  scanf("%d", &n);

  for(int i=1; i<=n; i++)
    scanf("%d", &d[i]);

  scanf("%d", &k);

  printf("%d\n", lower_bound(k));
}
