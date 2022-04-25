#include <stdio.h>


int main()
{
	char song[101] = { 0 };
	int a;

	scanf("%d",&a);

	for (int i = 0; i <=a; i++)
	{
		if (a != i&&i!=0)
		{
			fgets(song,101,stdin);
			printf("%sAMOLED\n",song);
		}
		else
		{
			gets(song);
			printf("%s", song);
		}
	}

	
}
