//���� 4
/*
#include <stdio.h>

int main()
{
	int a = 500, b = 700, c = 400;
	int i, j, k;
	int rest;

	for (int i = 1; i < 7; i++)
		for (int j = 1; j < 5; j++)
			for (int k = 1; k < 8; k++)
				if (i * a + j * b + k * c == 3500)
					printf("ũ���� %d��, ����� %d��, �ݶ�%d��\n", i, j, k);

	return 0;
}
*/

//����5
/*
#include <stdio.h>

int imprime(int num);

int main()
{
	int count=0;
	int num=2;

	while (count != 10)
	{

		if (imprime(num) == 1)
		{
			printf("%d\n", num);
			count++;
		}
		num++;

	}
	return 0;
}
int imprime(int num)
{
	int div = 0, i;

		for (i = 1; i <=num; i++)
		{
			if (num % i == 0)
				div++;
			else
				continue;
		}
	if (div == 2)
	return 1;
}
*/

//���� 6
/*
#include <stdio.h>

void time(int sec);

int main()
{
	int sec;

	printf("�ʸ� �Է��ϼ��� \n");
	scanf("%d", &sec);

	time (sec);
	return 0;
}

void time(int sec)
{
	int h=0, m=0, s=0;
	if (sec / 3600 >= 1)
	{
		h = sec / 3600;
		m = (sec % 3600)/60;
		s = sec%60;
		printf("%d�ð�%d��%d��", h, m, s);
	}
	else if ((sec % 3600)/60 >= 1)
	{ 
		m = (sec % 3600) / 60;
		s = sec % 60;
		printf("%d��%d��", m, s);
	}
	else
		printf("%d��", sec);

}
*/
//����7
/*
#include <stdio.h>
int main()
{
	int num, count = 0, temp = 2;
	printf("������ �Է��ϼ���.: ");
	scanf("%d", &num);

	while (1) {
		if (temp > num) 
			break;

			temp *= 2;
		count++;
	}
	printf("������ �����ϴ� k �� �ִ� ���� %d�̴�\n", count);
}
*/
//���� 8
/*
#include <stdio.h>

int jae (int num);

int main()
{
	int n=0;
	printf("���� �Է�\n");
	scanf("%d", &n);

	printf("2�� %d���� %d", n, jae(n));
	return 0;
}

int jae(int n)
{
	if (n == 0)
		return 1; 

	else
	
		return (2 * jae(n - 1));
	
}
*/
