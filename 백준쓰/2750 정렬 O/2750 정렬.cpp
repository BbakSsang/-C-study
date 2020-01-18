#include <stdio.h>

int temp = 0;
int main()
{
	int num;
	int j = 0;
	scanf("%d", &num);
	int arr[1000];
	int min;
	for (int i = 0; i < num; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < num; i++)
	{

		for (j = 0; j < num; j++)
		{
			min = arr[j];
			if (arr[i] < arr[j])
				{
					temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
		}
		j = 0;

	}
	for (int i = 0; i < num; i++)
		printf("%d\n",arr[i]);

	return 0;

}