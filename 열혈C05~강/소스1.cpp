/*
#include<stdio.h>
int main()
{
	int num1 = 1, num2 = 0;


	while (num1 != 0)
	{
		printf("������");
		scanf("%d", &num1);

		num2 = num1 + num2;
	}
	printf("%d", num2);
	return 0;
}
*/
/*
#include <stdio.h>
int main(void)
{
	int total = 0, num=1;
	while (num != 0)
	{
		printf("�����Է� 0ţ\n");
		scanf("%d", &num);
		total += num;
	}
	printf("�հ� =%d", total);
	return 0;
}
*/
/*

#include <stdio.h>
int main()
{
	int input = 0, total = 0;
	int num = 0;
	printf("�Է��� ������ ���� \n");
		scanf("%d", &input);

	while (num++ < input)
	{
		printf("���� �Է�\n");
		scanf("%d", &num);
		total += num;
		
	}
	printf("%f", (double)total / input);
	return 0;
}
*/
/*
#include<stdio.h>
int main()
{
	int dan = 1, i = 1;

	while (dan< 10)
	{
		i = 1;
		while (i< 10)
		{
			printf("%d x %d = %d\n", dan, i, dan * i);
			i++;
		}
		dan++;
	}
	return 0;
}
*/
/*
#include <stdio.h>
int main()
{
	int input = 0, count = 5, i = 0, total = 0;
	
	while (i < 5)
	{
		printf("���� �Է� (%d�� ����): \n", count);
			scanf("%d", &input);
			total += input;
			count--;
			i++;
			while (input < 1)
			{
				printf("���� �ٽ��Է� (%d�� ����)\n",count+1);
					scanf("%d", &input);
				total += input;
			}

	}
	printf("������ �հ� = %d", total);
	return 0;
}
*/
/*
#include <stdio.h>
int main()
{
	int a = 0, b = 0;
	
	while (a < 4)
		{
		printf("o");

		while(b<)

		}
	
	return 0;
}*/
/*/
#include <stdio.h>
int main()
{
	int total = 0, num = 0;

	do
	{
		printf("���� �Է�(0 to quit): ");
		scanf("%d", &num);
		total += num;
	} while (num != 0);
	printf("�հ�: %d \n", total);
	return 0;
}
*/
/*
#include <stdio.h>
int main()
{
	int num = 0, total = 0;

	printf("������ �Է��ϼ��� 0������ �����ϴ� ");
	scanf("%d", &num);
	while (num != 0)
	{
		total += num;
		printf("������ �Է��ϼ��� 0������ �����ϴ� ");
		scanf("%d", &num);
	}
	printf("�հ�: %d", total);
	return 0;
}
*/
/*
#include <stdio.h>
int main()
{
	int num = 1, even = 1, total = 0;

	do
	{
		even = 2 * num;
		total += even;
		num++;
	} while (num != 51);
	{
		printf("¦���� �հ�� %d", total);
		return 0;
	}
}
*/
/*
#include <stdio.h>
int main()
{
	double total = 0.0;
	double input = 0.0;
	int num = 0;

	for (; input >= 0.0;)
	{
		total += input;
		printf("��ձ��� �� ���� �Է��Ͻÿ�");
		scanf("%lf", &input);
		num++;
	}
	printf("����� ���� %lf", total / (num - 1));
	return 0;
}
*/
/*
#include <stdio.h>
int main()
{
	int input1=0, input2=0;
	int total = 0;
	printf("ù ��° ������ �Է����ּ��� ");
	scanf("%d", &input1);

	printf("�� ��° ������ �Է����ּ��� ");
	scanf("%d", &input2);

	for (int i = input1; i < input2+1; i++)
	{
		total += i;
	}
	printf("������ �� ���� %d", total);
	return 0;
}
*/
/*
#include <stdio.h>
int main()
{
	int num = 0;
	int total = 1;
	
	printf("���丮���� ���������� �Է����� !");
	scanf("%d", &num);
	for (int i = 1; i < num+1 ; i++)
	{
		total = total * i;
	}
	printf("���丮���� ���غ��ô�! %d", total);
	return 0;
}*/
/*
#include <stdio.h>
int main()
{
	int num;
	printf("���� �Է� ");
	scanf("%d", &num);

	if (num < 0)
		printf("�Է°��� 0���� �۽��ϴ�");
	
	if (num > 0)
		printf("�Է°��� 0���� Ů�ϴ�");
	if (num == 0)
		printf("�Է°��� 0�Դϴ�");
	return 0;
	*/
/*
#include <stdio.h>
int main()
{
	int num, abs;
	printf("���� �Է�: ");
	scanf("%d", &num);

		abs = num > 0 ? num : num * (-1);
	printf("���� ������ %d", abs);
	return 0;
}
*/
/*
#include <stdio.h>
int main()
{
	int seven, nine, total, num = 1;

	for (; num <= 100; num++)
	{

		if (num % 7==0 || num % 9==0)
			printf("%d ", num);

	}
	return 0;
}
*/
/*
#include <stdio.h>
int main()
{
	int num1, num2;

	printf("ù��° ������ �Է��ϼ��� \n");
	scanf("%d", &num1);
	printf("�ι��� ������ �Է��ϼ���\n");
	scanf("%d", &num2);

	if (num1 > num2)
	{
		printf("%d", num1 - num2);
	}
	
	else if (num2 > num1)
	{
		printf("%d", num2 - num1);
	}

	else
		printf("0");
	return 0;
}
*/
/*
#include <stdio.h>
int main()
{
	int total=0, num=0;

	for (int i = 0; i < 3; i++)
	{
		printf("������ �Է��ϼ���(������� ����, ����, ���� \n");
		scanf("%d", &num);

		total += num;
	}
	printf("%d", total);
	if (total / 3 >= 90)

		printf("�����մϴ� A�Դϴ�\n");

	else if (total / 3 >= 80)

		printf("�����մϴ� B�Դϴ�\n");

	else if (total / 3 >= 70)

		printf("�����մϴ� C�Դϴ�\n");

	else if (total / 3 >= 50)

		printf("�����մϴ� D�Դϴ�\n");

	else (total / 3 >= 90);
	printf("�ڳ� ������");

	
	return 0;
}
*/
/*
#include <stdio.h>
int main()
{
	int a = 0, b = 0, ans = 0;

	printf("1�����Է� \n");
	scanf("%d", &a);

	printf("2�����Է� \n");
	scanf("%d", &b);

	ans = (a - b) > (b - a) ? (a - b) : (b - a);
		printf("%d",ans);

	return 0;
}
*/
/*
#include<stdio.h>
int main()
{
	int i = 1, dan = 1;

	for (;i<10;i++)
	{
		if (i == 2 || i == 4 || i == 8)
			continue;

		for(;dan<10;dan++)
		{
			printf("%d * %d = %d\n", dan, i, dan * i);

			if (i < dan+1) //1=2 2=3 3=4
				break;
		}
		dan = 1;
	
	}
	return 0;
}
*/
/*
#include <stdio.h>
int main()
{
	int num = 0;
	printf("0�̻��� ������ �Է��϶� \n");
	scanf("%d", num);
	
	while (num < 30)
	{
		num++;

		switch (num)
		{
		case 9:
			printf("0�̻�10�̸�");


		case 19:
			printf("10�̻�20�̸�");


		case 29:
			printf("20�̻�30�̸�");

		default:
			printf("30�̻�");
			break;
		}

	}
	return 0;
} ///����!!!!!!! 200p
*/

/*
#include <stdio.h>

int Add(int num1, int num2)
{
	return num1 + num2;
}
int main()
{
	int result;
	result = Add(3, 4);
	printf("�������1 : %d \n", result);
	result = Add(5, 8);
	printf("������� :%d\n", result);
	return 0;

}*/
/*
#include <stdio.h>
int main()

int showadd(int num)
{
	
	showadd="printf("%d",num);

}*/
/*
#include< stdio.h>

int number(int, int);

int main()
{
	printf("3��4�߿��� ū ���� %d�̴�\n", number(3, 4));
	printf("5��4�߿��� ū ���� %d�̴�\n", number(5, 4));
	return 0;
}

	int number(int a,int b)
	{
		if (a > b)
			return a;
		else
			return b;
		
	}
	*/
/*
#include <stdio.h>

int absocom(int num1, int num2);
int getabso(int);

int main()
{
	int num1, num2;
	printf("�ΰ��� ���� �Է� :");
	scanf("%d %d", &num1, &num2);

	printf("%d�� %d�� ������ �� ū ���� :%d", num1,num2, absocom(num1, num2));
	return 0;
}
int absocom(int num1, int num2)
{
	if (getabso(num1) > getabso(num2))
		return num1;
	else
		return num2;
}
int getabso(int num)
{
	if (num < 0)
		return  num * (-1);

	else
		return num;
}
*/
/*
#include <stdio.h>
int big(int num1, int num2, int num3);
int small(int num1, int num2, int num3);

int main()
{
	int num1, num2, num3;
	printf("3���� ������ �Է����ּ��� \n");
	scanf("%d %d %d", &num1, &num2, &num3);

	printf("3���� ���� ū ���� %d�Դϴ�\n", big(num1,num2,num3));
	printf("3���� ���� ���� ���� %d�Դϴ�", small(num1,num2,num3));
	return 0;
}

int big(int num1, int num2, int num3)
{
	if (num1 > num2&& num1 > num3)
		return num1;
	else if (num2 > num1&& num2 > num3)
		return num2;
	else
		return num3;
}
int small(int num1, int num2, int num3)
{
	if (num1 < num2&& num1 < num3)
		return num1;
	else if (num2 < num1&& num2 < num3)
		return num2;
	else
		return num3;
}
*/

#include <stdio.h>

double CelToFah(double F);
double FahToCel (double C);

int main()
{
	double C=0, F=0;
	int what;
	printf("������ȯ 1, ȭ����ȯ 2");
	scanf("%d", &what);

	if (what == 1)
	
		printf("���� �µ��� �Է��Ͻÿ�\n");
		scanf("%Lf", &C);
		printf("%Lf", FahToCel(C));
	

	else (what == 2)
	
		printf("ȭ�� �µ��� �Է��Ͻÿ�\n");
		scanf("&Lf", &F);
		printf("%Lf",CeltoFah(F));

	return 0;
}
double CelToFah(double F)
{
	return  1.8 * F + 32;
	return F;
}
double FahToCel(double C);
{
	return C/1.8 - 32;
	
}