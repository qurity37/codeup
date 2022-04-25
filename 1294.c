
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
			a[i] = 'd';
			break;
		case'b':
			a[i] = 'e';
			break;
		case'c':
			a[i] = 'f';
			break;
		case'd':
			a[i] = 'g';
			break;
		case'e':
			a[i] = 'h';
			break;
		case'f':
			a[i] = 'i';
			break;
		case'g':
			a[i] = 'j';
			break;
		case'h':
			a[i] = 'k';
			break;
		case'i':
			a[i] = 'l';
			break;
		case'j':
			a[i] = 'm';
			break;
		case'k':
			a[i] = 'n';
			break;
		case'l':
			a[i] = 'o';
			break;
		case'm':
			a[i] = 'p';
			break;
		case'n':
			a[i] = 'q';
			break;
		case'o':
			a[i] = 'r';
			break;
		case'p':
			a[i] = 's';
			break;
		case'q':
			a[i] = 't';
			break;
		case'r':
			a[i] = 'u';
			break;
		case's':
			a[i] = 'v';
			break;
		case't':
			a[i] = 'w';
			break;
		case'u':
			a[i] = 'x';
			break;
		case'v':
			a[i] = 'y';
			break;

		case'w':
			a[i] = 'z';
			break;
		case'x':
			a[i] = 'a';
			break;
		case'y':
			a[i] = 'b';
			break;
		case'z':
			a[i] = 'c';
			break;

		default:
			break;
		}

	}
	printf("%s", a);
}

