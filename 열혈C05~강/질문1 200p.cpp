#include <stdio.h>
int main()
{
	int num = 0;
	printf("0�̻��� ������ �Է��϶� \n");
	scanf("%d", &num);

	while (num < 30)
	{
		num++;

		switch (num/10)
		{
			
		case 0:
			printf("0�̻�10�̸�");
			break;

		case 1:
			printf("10�̻�20�̸�");
			break;

		case 2:
			printf("20�̻�30�̸�");
			break;

		default:
			printf("30�̻�");
			break;
		}
		return 0;
	}
	
} ///����!!!!!!! 200p