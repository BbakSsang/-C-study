
/*clude <stdio.h>

double CelToFah(double F)
{
	return  (1.8 * F + 32);
}
double FahToCel(double C)
{
	return (C / 1.8 - 32);
}

int main()
{
	double C = 0;
	double F = 0;
	int what;
	printf("������ȯ 1, ȭ����ȯ 2");
	scanf("%d", &what);

	if (what == 1)
	{
		printf("���� �µ��� �Է��Ͻÿ�\n");
		scanf("%f", &C);
		printf("%lf", FahToCel(C));
	}

	else
	{
	
	printf("ȭ�� �µ��� �Է��Ͻÿ�\n");
	scanf("&f", &F);
	printf("%lf", CelToFah(F));
	}
	return 0;
}
*/
/*
#include <stdio.h>
void showfiboseries(int num)
{
	int f1 = 0, f2 = 1, f3, i;
		if (num == 1)
			printf("%d", f1);

		else
			printf("%d %d\n", f1, f2);
	for (i = 0; i < num - 2; i++)
	{
		f3 = f1 + f2;
		printf("%d\n", f3);
		f1 = f2;
		f2 = f3;
	}
}
int main()
{
	int n;
	printf("����ϰ��� �ϴ� �Ǻ���ġ ������ ���� : \n");
	scanf("%d", &n);

	if (n < 1)
	{
		printf("1�̻��� ���� �Է��ϼ���. \n");
		return -1;
	}
	showfiboseries(n);
	return 0;
}
*/
/*
#include <stdio.h>

void simplefuncone()
{
	int num = 10;
	num++;
	printf("simplefuncone num: %d \n", num);
}
int simplefunctwo()
{
	int num1 = 20;
	int num2 = 30;
	num1++, num2++;
	printf("num1&num2: %d %d\n", num1, num2);
	return 0;
}

int main()
{
	int num = 17;
	int a, b;
	simplefuncone();
	b=simplefunctwo();
	printf("main num: %d \n", num);
	printf("%d", b);
	return 0;
}
*/
/*
#include <stdio.h>

int main()
{
	int num = 1;

	if (num == 1)
	{
		int num = 7;//�ּ�
		num += 10;
		printf("if ���� �������� num: %d\n", num);
	}
	printf("main �Լ��� �������� num: %d \n", num);
	return 0;
}*/
/*
#include <stdio.h>


int AddToTotal(int num)
{
	static int total = 0;
	total += num;
	return total;
}

int main()
{
	int num, i;
	for (i = 0; i < 3; i++)
	{
		printf("�Է� %d\n", i + 1);
		scanf("%d", &num);
		printf("���� %d \n", AddToTotal(num));

	}
	return 0;
}
*/
/*
#include <stdio.h>

void recurs(int num)
{
	if (num <= 0)
		return;
	printf("recursive call! %d \n", num);
	recurs(num - 1);
}

int main()
{
	recurs(3);
	return 0;
}
*/s
/*
#include <stdio.h>

int sum(int num)
{
	if (num < 0)
		return 0;
	else
		return num + sum(num - 1);
}
int main()
{
	printf("%d", sum(5));
		return 0;
}*/