#include <stdio.h>
int main() {
	int k, n,r;

	scanf("%d %d", &n, &k);
	r = n / k;

	if (r>=10000)
	{
		printf("번호 초과 오류");
		return 0;
	}
	else
	{
		for (int i = 1; i <= r; i++)
		{
			if (i < 10)
			{
				printf("F-000%d\n", i);
			}
			else if (i <100)
			{
				printf("F-00%d\n", i);
			}
			else if (i < 1000)
			{
				printf("F-0%d\n", i);
			}
			else
			{
				printf("F-%d\n", i);
			}
		}
	}
	
}
