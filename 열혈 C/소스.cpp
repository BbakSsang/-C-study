/*#include <stdio.h>
int main()
{
	printf("hello world! \n");
	return 0;
}
*/
/*
#include <stdio.h>
int main()
{
	printf("�ڻ���\n�� �� ��\n �� ����.\n");
	return 0;
}
*/
/*
#include <stdio.h>
int main()
{
	printf("�� �̸��� �ڻ��� �Դϴ�\n");
	printf("�� ���̴� %d�� �̰��", 23);
	printf("���� ��°��� �̸ŵ� %d�Դϴ�", 144);
	return 0;
}
*/
/*
#include <stdio.h>
int main()
{
	printf("%d * %d = %d", 4, 5, 20);
		return 0;
}
*/
/*
#include <stdio.h>
int main()
{
	int num1, num2;
	int num3 = 30, num4 = 40;

	num1 = 1;
	num2 = 2;
	printf("num1=%d, num2=%d\n", num1, num2);
	num1 = 1;
	num2 = 2;

	printf("num3=%d, num4=%d", num3, num4);
}
*/
/*
#include <stdio.h>
int main()
{
	int num1 = 10;
	int num2 = 12;
	int result1, result2, result3;

	result1 = (num1 == 10 && num2 == 12);
	result2 = (num1 < 12 || num2>12);
	result3 = (!num1);
	
	printf("%d\n%d\n%d", result1, result2, result3);
	return 0;
}
*/
/*
#include <stdio.h>
int main()
{
	int result;
	int num1, num2;

	printf("���� one: \n");
	scanf("%d", &num1);

		printf("���� two: \n");
		scanf("%d", &num2);

		printf("num1=%d, num2=%d", num1, num2);
		return 0;

}
*/
/*
#include <stdio.h>
int main()

{
	int num1, num2, num3;
		int result;
	printf("������ ������ �Է��Ͻÿ�\n");
	scanf("%d %d %d", &num1, &num2, &num3);

	result = (num1 - num2) * (num2 + num3);
	printf("(%d -%d) * (%d+%d) = %d", num1,num2,num2,num3,result);

	return 0;
	
}
*/
/*
#include <stdio.h>
int main()
{
	int i;
	float num = 0.0;

	for (i = 0; i < 100; i++)
		num += 0.1;
	
	printf("0.1�� 100�� ���� ���: %f \n", num);
		return 0;

}
*/
/*
#include <stdio.h>
int main()
{
	int num = 15;

	int result1 = num << 1;
	int result2 = num << 2;
	int result3 = num << 3;

	printf("1ĭ �̵����: %d\n", result1);
	printf("2ĭ �̵����: %d\n", result2);
	printf("3ĭ �̵����: %d\n", result3);
	return 0;
}
*/
/*
#include <stdio.h>
int main()
{
	int num = -16;
	
	printf("2ĭ�� ���������� �̵��� ��� %d\n", num >> 2);
	printf("3ĭ�� ���������� �̵��� ��� %d\n", num >> 3);
	return 0;
}
*/
/*#include <stdio.h>
int main()
{
	int num = 0,num1=0;
	printf("���ڸ� �Է��ϼ���\n");
	scanf("%d", &num);
	
	num1 = ~num;
	printf("%d", num1);
	return 0;
}
*/ //���� Ȯ�ο�
/*
#include <stdio.h>
int main()
{
	int num;

		printf("������ �Է��Ͻÿ�: \n");
		scanf("%d", &num);
		num = ~num++;
		printf("%d", num);
	return 0;
}*/
/*
#include <stdio.h>
int main()
{
	int num1, num2, num3,result1,result2;
	printf("x*x/x= :\n");
	scanf("%d %d %d", &num1, &num2, &num3);

	result1 = num1 << 3;
	result2 = result1 >> 2;

	printf("%d", result2);
	return 0;
}
*/