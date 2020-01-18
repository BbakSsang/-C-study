#include <stdio.h>
int main()
{
	int num = 0;
	printf("0이상의 정수를 입력하라 \n");
	scanf("%d", &num);

	while (num < 30)
	{
		num++;

		switch (num/10)
		{
			
		case 0:
			printf("0이상10미만");
			break;

		case 1:
			printf("10이상20미만");
			break;

		case 2:
			printf("20이상30미만");
			break;

		default:
			printf("30이상");
			break;
		}
		return 0;
	}
	
} ///질문!!!!!!! 200p