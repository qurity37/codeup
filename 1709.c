#include <stdio.h>

int main() {
	int a[101] = {NULL};
	int  b, c,temp=0;
	scanf("%d", &b);
	for (int i = 0; i < b; i++)
	{
		scanf("%d",&a[i]);
	}

	for (int i = 0; i < b; i++)
	{
		for (int j = i+1; j < b; j++)
		{
			if (a[i] < a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
		
	}
	for (int i = 0; i < b; i++)
	{
		printf("%d ",a[i]);
	}

}
