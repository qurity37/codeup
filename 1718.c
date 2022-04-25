#include <stdio.h>
#include <string.h>

int main()
{
	char a[101] = {NULL};
	int l, ar[101], br[101] = { NULL }, k = 0, s1 = 0, s2 = 0;

	scanf("%s", a);
	for (int i = 1; i < strlen(a); i++)
	{
		if (a[i] == 'H')
		{
			l = i + 1;
			break;
		}
		else
		{
			ar[k] =a[i]-48;
			k++;
		}
		
	}
	int z = k;
	for (int i = 0; i < k; i++)
	{
		if (k>1)
		{
			for (int j = z-1; j > 0; j--)
			{
				ar[i] =ar[i]* 10;
				
			}
			s1 += ar[i];
			
			z--;
		}
		else
		{
			s1 += ar[i];
		}
		
	}
	int f=0;
	for (int i = l;a[i] != NULL; i++)
	{
		br[i] = a[i] -= 48;
		f++;
	}
	for (int i = l; i < strlen(a); i++)
	{
		if (f>1)
		{
			
				for (int j = f - 1; j > 0; j--)
				{
					br[i] = br[i] * 10;

				}
				s2 += br[i];

				f--;
			
		}
		else
		{
			s2 += br[i];
		}
	}
	if (s1==0)
	{
		s1 = 1;
	}
	if (s2==0)
	{
		s2 = 1;
	}
	printf("%d",(s1*12)+s2);
}
