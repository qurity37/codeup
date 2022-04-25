
#include <stdio.h>
#include <string.h>
int main(void)
{
	int a[27] = { NULL };
	char aa[91] = { 0 }, abc[27] = { 'a','b','c','d','e','f','g','h','i','j' ,'k' ,'l' ,'m' ,'n' ,'o' ,'p' ,'q' ,'r' ,'s','t','u','v','w','x','y','z' };

	fgets(aa, 91, stdin);
	for (int j = 0; aa[j] != 0; j++)
	{
		for (int i = 0; abc[i] != 0; i++)
		{

			if (abc[i] == aa[j])
			{
				a[i] = a[i] + 1;
			}
		}
	}
	for (int i = 0; abc[i] != 0; i++)
	{
		printf("%c:%d\n", abc[i], a[i]);
	}
	
}

