#include <stdio.h>

int main() {
	int h=0, m=0, s=0,index;
	scanf("%d", &index);

	while (1)
	{

		if (index == 0)
		{
			break;
		}
		else if (index >= 3600)
		{
			index -= 3600;
			h++;
		}
		else if (index >=60)
		{
			index -= 60;
			m++;
		}
		else
		{
			s = index;
			index = 0;
		}

	}
	printf("%d %d %d", h, m, s);

}
