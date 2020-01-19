#include <stdio.h>
int main()
{
	int num1;
	int num2;

	int arr[10] = { 0,0,0,0,0 };
	int brr[10]=  { 0,0,0,0,0 };
	int crr[10]=  { 0,0,0,0,0 };

	int i, j;

	scanf("%d", &num1);

	for (i = 0; i < num1; i++)
	{
		scanf("%d", &arr[i]);
	}

	scanf("%d", &num2);

	for (i = 0; i < num2; i++)
	{
		scanf("%d", &brr[i]);
	}

	for (int i = 0; i < num2; i++)
	{
		for (j = 0; j < num2; j++)
		{
			if (arr[i] == brr[j])
				crr[j]++;
		}
		j = 0;
	}
	
	for (i = 0; i < num2; i++)
		printf("%d\n", crr[i]);


	return 0;
}