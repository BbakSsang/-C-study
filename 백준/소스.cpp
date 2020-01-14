#include <stdio.h>
int main()
{
	int arr[10];
	int temp = 0;
	int num = 0;
	int A, B, C;
	int multiply;

	scanf("%d %d %d", &A, &B, &C);

	multiply = A * B * C;


	if (multiply >= 100000000)
	{
		for (int i = 0; i < 9; i++)
		{
			int num;
			num = multiply;
			num = num % 10;
			multiply = multiply / 10;
			arr[(8 - i)] = num;
			temp++;
		}
	}
	if (multiply >= 10000000)
	{
		for (int i = 0; i < 8; i++)
		{
			int num;
			num = multiply;
			num = num % 10;
			multiply = multiply / 10;
			arr[(7 - i)] = num;
			temp++;
		}
	}
	if (multiply >= 1000000)
	{
		for (int i = 0; i < 7; i++)
		{
			int num;
			num = multiply;
			num = num % 10;
			multiply = multiply / 10;
			arr[(6 - i)] = num;
			temp++;
		}
	}

	int brr[10] = { 0,0,0,0,0,0,0,0,0,0 };

	for (int i = 0; i < 10;i++)
	{
		num = arr[i];
		brr[num]++;
	}


	for (int i = 0; i < 10; i++)
		printf("%d\n", brr[i]);

	return 0;
}

