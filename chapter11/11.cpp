//256
/*
#include <stdio.h>
int main()
{
	int arr[5];
	int sum = 0, i;

	arr[0] = 10, arr[1] = 20, arr[2] = 30, arr[3] = 40, arr[4] = 5;

	for (i = 0; i < 5; i++)
		sum += arr[i];

	printf("�迭��ҿ� ����� ���� ��: %d \n", sum);
	return 0;
}
*/
/*
//���� 11-1
#include<stdio.h>
int main()
{
	int arr[5];
	int min=0, max=0, sum=0;
	printf("5���� ���� �Է� \n");
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < 5; i++)
	{
		sum += arr[i];
		if (arr[i] >= arr[1] && arr[i] >= arr[2] && arr[i] >= arr[3] && arr[i] >= arr[4])
		{
			max = arr[i];
		}
		if (arr[i] <= arr[1] && arr[i] <= arr[2] && arr[i] <= arr[3] && arr[i] <= arr[4])
		{
			min = arr[i];
		}
	}
	printf("MAX�� %d, Min�� %d, SUM��%d", max, min, sum);

	

	return 0;
}
*/
//���� 11-2
/*
#include <stdio.h>
int main()
{
	char arr[10];

	printf("������ ���� �Է��Ͻÿ�\n");
	for (int i = 0; i < 10 ; i++)
	{
		scanf("%c", &arr[i]);
	}
	for(int i=0;i<10;i++)
	printf("%c", arr[i]);

	return 0;
}
*/
/*
//p262 ArrayString
#include <stdio.h>
int main()
{
	char str[] = "good morning!";
	printf("�迭 str�� ũ�� %d\n", sizeof (str));
	printf("�� ���� ������ ���: %c\n", str[13]);
	printf("�� ���� ������ ���: %d\n", str[13]);

	str[12] = '?';
	printf("���ڿ� ��� %s", str);
	return 0;
}
*/
/*
#include <stdio.h>
int main()
{
	char str[50];
	int idx = 0;

printf("���ڿ� �Է�: ");
scanf("%s", str);
printf("�Է� ���� ���ڿ� %s\n", str);

printf("���� ���� ���: ");

while (str[idx] != '\0')
{
	printf("%c", str[idx]);
	idx++;

}

return 0;
}
*/

//���� 11-2-1 p268
/*
#include <stdio.h>
int main()
{
	char arr[50];
	int i = 0;

	printf("���ܾ ���� ���� �Է��Ͻÿ� ");
	scanf("%s", arr);

	while (arr[i] != '\0')
	{
		i++;
	}
	printf("���̴� %d �Դϴ�", i);
	return 0;
}
*/
/*
#include <stdio.h>
int main()
{
	char arr[50];
	int i = 0;


	printf("���ܾ ���� ���� �Է��Ͻÿ� ");
	scanf("%s", arr);

	while (arr[i] != '\0')
	{
		i++;
	}
	printf("���̴� %d �Դϴ�\n", i);
	printf("%c",arr[4]);
	return 0;
}
*/