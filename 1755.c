#include <stdio.h>

int main()
{
	char a[101] = { 0 };

	fgets(a, 101, stdin);

	for (int i = 0; a[i] != 0; i++)
	{
		if (a[i] == '.' && a[i + 1] == 'd' && a[i + 2] == 'i'&&a[i+3]=='b')
		{
			printf("Paint.Picture");
			break;
		}
		else if (a[i] == '.' && a[i + 1] == 'd' && a[i + 2] == 'o'&&a[i+3]=='c'&&a[i+4]!='x')
		{
			printf("Word.Document.8");
			break;
		}
		else if (a[i] == '.' && a[i + 1] == 'd' && a[i + 2] == 'o' && a[i + 3] == 'c' && a[i + 4] == 'x')
		{
			printf("Word.Document.12 ");
			break;
		}
		else if (a[i] == '.' && a[i + 1] == 'h' && a[i + 2] == 't' && a[i + 3] == 'm')
		{
			printf("htmfile");
			break;
		}
		else if (a[i] == '.' && a[i + 1] == 'h' && a[i + 2] == 't' && a[i + 3] == 'm' && a[i + 4] == 'l')
		{
			printf("htmlfile");
			break;
		}
		else if (a[i] == '.' && a[i + 1] == 'h' && a[i + 2] == 'w' && a[i + 3] == 'p' )
		{
			printf("Hwp.Document.96");
			break;
		}
		else if (a[i] == '.' && a[i + 1] == 'h' && a[i + 2] == 'w' && a[i + 3] == 'p' && a[i + 4] == 'x')
		{
			printf("Hwp.Document.hwpx.96");
			break;
		}
		else if (a[i] == '.' && a[i + 1] == 'h' && a[i + 2] == 'w' && a[i + 3] == 't')
		{
			printf("Hwp.Document.hwt.96");
			break;
		}
		else if (a[i] == '.' && a[i + 1] == 'j' && a[i + 2] == 'p' && a[i + 3] == 'e' )
		{
			printf("jpegfile");
			break;
			
		}
		else if (a[i] == '.' && a[i + 1] == 'j' && a[i + 2] == 'p' && a[i + 3] == 'e' && a[i + 4] == 'g')
		{
			printf("jpegfile");
			break;
		}
		else if (a[i] == '.' && a[i + 1] == 'j' && a[i + 2] == 'p' && a[i + 3] == 'g')
		{
			printf("jpegfile");
			break;
		}
		else if (a[i] == '.' && a[i + 1] == 'p' && a[i + 2] == 'p' && a[i + 3] == 't' && a[i + 4] == 'x')
		{
			printf("PowerPoint.Show.12");
			break;
		}
		else if (a[i] == '.' && a[i + 1] == 'p' && a[i + 2] == 'p' && a[i + 3] == 't')
		{
			printf("PowerPoint.Show.8");
			break;
		}
		else if (a[i] == '.' && a[i + 1] == 'p' && a[i + 2] == 'p' && a[i + 3] == 't' && a[i + 4] == 'x'&&a[i+5] =='m'&&a[i+6] =='l')
		{
			printf("powerpointxmlfile");
			break;
		}
	}
}
