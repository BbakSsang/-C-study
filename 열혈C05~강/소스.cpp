/*
#include <stdio.h>
int main()
{
	char num;
	printf("������ �Է��Ͻÿ� �ƽ�Ű�� ��ȯ�մϴ� :\n");
	scanf("%c", &num);

	
	printf("%d", num);
	return 0;
}
*/
/*
#include <stdio.h>
int main()
{
	double num1 = 245;
	int num2 = 3.1415;
		int num3 = 129;
		char ch = 129;

		printf("���� 245�� �Ǽ��� %f\n", num1);
		printf("�Ǽ� 3.1415�� ������ %d\n", num2);
		printf("ū���� 129�� ���� ������ %d", ch);
		return 0;

}
*/
/*
#include <stdio.h>
int main()
{
	 double num1 = 3, num2 = 4;
	double div;
	div = num1 / num2;
	printf("%f", div);
	return 0;
}
*/
/*
#include <stdio.h>
int main()
{
	int num1 = 7, num2 = 13;
	printf("%o %#o", num1, num2);
	printf("%x %#x", num1, num2);
	return 0;

}
*/
/*
#include <stdio.h>
int main()
{
	printf("%f \n", 0.1234);
	printf("%e \n", 0.1234);
	printf("%f \n", 0.123456789);
	printf("%e \n", 0.123456789);
	return 0;
}
*/
/*
#include <stdio.h>
int main()
{
	printf("%-13s %-3s %8s\n", "�̸�", "�ڻ���", "��ǻ�� ���а�");
	printf("%-13s %6s %10s\n", "�̸�", "����", "�濵�а�");
	printf("%-13s %-3s %8s\n", "�̸�", "�ڻ���", "���� ���а�");
	return 0;
	*/
	
// 6�� ������
//7�� ����
/*
#include <stdio.h>


int main()

{
	int num = 0;
	while (num < 5)
	{
		printf("hello world! %d\n", num);
		num++;
	}
	return 0;
}
*/
/*
#include <stdio.h>
int main()
{
	int num = 0;
	int input = 0;
	printf("�������� ���� ��ȣ �Է�! \n");
	scanf("%d", &input);

	while (num < 10)
	{
		printf("%d x %d = %d\n", input, num, input*num);
		num++;
	}
	return 0;
}
*/
/*
#include <stdio.h>
int main()
{
	int num=0;
	printf("������ �Է��ϼ���\n");
	scanf("%d", &num);
	
	while (num > 0)
	{
		printf("hello world\n");
		num--;
	}
	return 0;
}
*/
/*
#include <stdio.h>
int main()
{
	int num, five = 1;
	printf("3��� �� ������ �Է��ϼ���");
	scanf("%d", &num);

	while (five <5)
	{
		printf("%d", num * 3);
		five++;
		num++;
	}
	return 0;
}
*/

#include<stdio.h>

void num1 = 0, num2 = 0;

int main()
{

	while (num1 != 0)
	{
		printf("������");
		scanf("%d", &num1);
		num2 = num1 + num2;
	}
	printf("%d", num2);
	return 0;
}