#include <stdio.h>

int main() {
	char a[11] = { 0 };

	fgets(a, 1000, stdin);


	printf("welcome! %s",a);
}
