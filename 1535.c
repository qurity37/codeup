#include <stdio.h>

int n, d[110];


#include <stdio.h>

int n;
int d[110] = { NULL };
int f()
{
    int c=0,e=0,i=0;
   
    for ( i = 0; i < n; i++)
    {
        if (d[i] >= e && d[i] != e)
        {
            c = i+1;
            e = d[i];
        }
    }
    if (n == 1)
    {
        c = 1;
    }
    return c;
}

int main()
{
  scanf("%d", &n);

  for(int i=0; i<n; i++)
    scanf("%d", &d[i]);

  printf("%d", f());
  return 0;
}
