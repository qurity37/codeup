
#include <stdio.h>

int main(void)
{
	char a[201] = { 0 };

	gets(a);

	for (int i = 0; i < 200; i++)
	{
		switch (a[i])
		{
		case'a':
			a[i] = 'x';
			break;
		case'b':
			a[i] = 'y';
			break;
		case'c':
			a[i] = 'z';
			break;
		case'd':
			a[i] = 'a';
			break;
		case'e':
			a[i] = 'b';
			break;
		case'f':
			a[i] = 'c';
			break;
		case'g':
			a[i] = 'd';
			break;
		case'h':
			a[i] = 'e';
			break;
		case'i':
			a[i] = 'f';
			break;
		case'j':
			a[i] = 'g';
			break;
		case'k':
			a[i] = 'h';
			break;
		case'l':
			a[i] = 'i';
			break;
		case'm':
			a[i] = 'j';
			break;
		case'n':
			a[i] = 'k';
			break;
		case'o':
			a[i] = 'l';
			break;
		case'p':
			a[i] = 'm';
			break;
		case'q':
			a[i] = 'n';
			break;
		case'r':
			a[i] = 'o';
			break;
		case's':
			a[i] = 'p';
			break;
		case't':
			a[i] = 'q';
			break;
		case'u':
			a[i] = 'r';
			break;
		case'v':
			a[i] = 's';
			break;

		case'w':
			a[i] = 't';
			break;
		case'x':
			a[i] = 'u';
			break;
		case'y':
			a[i] = 'v';
			break;
		case'z':
			a[i] = 'w';
			break;

		default:
			break;
		}

	}
	printf("%s", a);
}

