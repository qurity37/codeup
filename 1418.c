
#include <stdio.h>
#include <string.h>
int main(void)
{
	
	char aa[11] = { 0 };

	fgets(aa, 11, stdin);
	
	for (int i = 0; aa[i] != 0; i++)
	{
		if (aa[i] == 't')
		{
			printf("%d ", i + 1);
		}
	}
}

