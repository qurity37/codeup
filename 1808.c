#include <stdio.h>
#include <string.h>
s9()
{
	for (int i = 99; i > 0; i--)
	{
		if (i==99)
		{
			printf("%d bottles of beer on the wall, %d bottles of beer. \n", i, i);
		}
		else if (i==1)
		{
			printf("Take one down and pass it around, 1 bottle of beer on the wall. \n1 bottle of beer on the wall, 1 bottle of beer. \n");
		}
		else
		{
			printf("Take one down and pass it around, %d bottles of beer on the wall. \n%d bottles of beer on the wall, %d bottles of beer. \n", i, i, i);
		}
		
	}
	printf("Take one down and pass it around, no more bottles of beer on the wall. \nNo more bottles of beer on the wall, no more bottles of beer. \nGo to the store and buy some more, 99 bottles of beer on the wall. ");
}
hello()
{
	printf("Hello, world! ");
}
q(char a[50])
{
	printf("%s ",a);
}
int main()
{
	char a[50];
	scanf("%s", a);

	for (int i = 0; i < strlen(a); i++)
	{
		switch (a[i])
		{
		case 'H':
			hello();
			break;
		case 'Q':
			q(a);
			break;
		case '9':
			s9();
			break;
		case '+':

		default:
			break;
		}
	}
}
