
#include <stdio.h>

int main(void)
{
	char a[101] = { NULL },c=0,f=0,d=0;

	gets(a);

	for (int i = 0; a[c] != 0; i++)
	{
		if (a[i]=='c'||a[i]=='C')
		{
			f++;
		}
		if (a[i] == 'c'&&a[i+1]=='c' || a[i] == 'C'&&a[i+1]=='C'|| a[i] == 'c'&& a[i + 1] == 'C'|| a[i] == 'C' && a[i + 1] == 'c')
		{
			d++;
		}
		c++;
	}
	printf("%d %d", f,d);
}

