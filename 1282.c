#include <math.h>
#include <stdio.h>

int main(void) {
	int a,b=0;
	scanf("%d", &a);
	b = a;
	a = sqrt(a);

	printf("%d %d",b-a*a, a);

	return 0;
}
