#include <stdio.h>

void f()
{
  for(int i=1; i<=2; i++)
    printf("%c", '*');

  return; //생략가능
} //자동복귀

int main()
{
    f();
    return 0;
}
