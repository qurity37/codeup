#include <stdio.h>

int main() {
	char a[1000] = { 0 };

	fgets(a, 1000, stdin);

	for (int i = 0; a[i] != 0; i++)
	{
		if (a[0] == 'I' && a[1] == 'O' && a[2] == 'I'&&a[3]!='I')
		{
			printf("IOI is the International Olympiad in Informatics.");
			return 0;
	  }
		
	}
	printf("I don't care.");
}
