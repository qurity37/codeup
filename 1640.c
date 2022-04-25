#include <stdio.h>
#include <string.h>

int main()
{
    int n,z=0;
	char a[51] = {0};
    scanf("%d",&n); //정수 개수 입력받기

	for (int i = 0; i <= n; i++)// 개수 만큼 반복
	{
		gets(a);// 문자열 받기
		for (int i = 0; a[i] != 0; i++)  //입력받은 a 문자열을 a[i] 부터 0이 나오기 전까지 반복
		{
			if (strlen(a) < 4) //문자열의 길이가 3보다 작다면 출력후 오류 z ++
			{
				printf("%s\n",a);
				z++;
				break;
			}
			else if (a[i]=='t'&&a[i+1]=='a'&&a[i+2]=='p') //문자열 에 tap 가 있다면  출력후 오류 z++
			{
				printf("%s\n", a);
				z++;
				break;
			}
			else if (a[i] == 'x' && a[i + 1] == 'o' && a[i + 2] == 'c' && a[i + 3] == 'u' && a[i + 4] == 'r' && a[i + 5] == 'e') 
			{
				printf("%s\n", a); //문자열에 xocure 가 있다면 출력후 오류 z++;
				z++;
				break;
			}
		}
	}
	if (z<=3) //오류 z가 0~3개라면 sasfe 출력
	{
		printf("safe");
	}
	else if (z>=4&&z<=6)//오류 z가 4~6개라면 warning 출력
	{
		printf("warning");
	}
	else
	{
		printf("danger");//오류 z가 위에 해당되지 않는다면 danger 출력
	}

}
#pragma warning(disable: 4819) //


