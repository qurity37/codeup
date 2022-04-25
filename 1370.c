#include <stdio.h>

int main()
{
	int h, r;
	scanf("%d %d",&h,&r);
  
	for (int i = 1; i <= r*2; i++) //별을 그릴횟수 만큼 반복
	{
		if (i%2==1) // i가 홀수 라면 오름차순 으로 별을 출력
		{
			for (int j = 0; j <= h; j++)
			{
				for (int c = j-1; c >= 0; c--)
				{
					if (c == 0) //c가 0 즉 공백을 전부 출력하고 난후에 별출력
					{
						printf("*\n");
					}
					else //c가 0이 아니라면 공백출력
					{
						printf(" ");
					}
				}
			
			    
			    
			    
			}
		}
		else // i가 짝수 라면 내림차순 으로 별을 출력
		{
			for (int j = h-1; j >= 0; j--)
			{
				for (int c = j-1; c >= 0; c--)
				{
					if (c == 0&&j!=1)  //j가 1일 경우 다음에는 다음줄이 출력되기 때문에 줄전환하지않음
					{
						printf("*\n");
					}
					else if (c==0&&j==1)
					{
						printf("*\n");//여기에 \n을 추가해준다
					}
					else
					{
						printf(" ");
					}
				}
				
					
				
			
			}
		}
		
	}
}
