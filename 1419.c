
#include <stdio.h>
#include <string.h>
int main(void)
{
	int b = 0;
	char aa[101] = { 0 };

	fgets(aa, 101, stdin);
	
	for (int i = 0; aa[i] != 0; i++)
	{
		if (aa[i] == 'l'&&aa[i+1] == 'o' && aa[i+2] == 'v' &&aa[i+3] == 'e')
		{
			b++;
		}
	}
	printf("%d", b);
}

