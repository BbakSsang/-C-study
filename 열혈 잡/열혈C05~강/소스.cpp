/*
#include <stdio.h>
int main()
{
	char num;
	printf("정수를 입력하시오 아스키로 변환합니다 :\n");
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

		printf("정수 245를 실수로 %f\n", num1);
		printf("실수 3.1415를 정수로 %d\n", num2);
		printf("큰정수 129를 작은 정수로 %d", ch);
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
	printf("%-13s %-3s %8s\n", "이름", "박상현", "컴퓨터 공학과");
	printf("%-13s %6s %10s\n", "이름", "강준", "경영학과");
	printf("%-13s %-3s %8s\n", "이름", "박상현", "전기 공학과");
	return 0;
	*/
	
// 6강 마무리
//7강 시작
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
	printf("구구단을 외자 번호 입력! \n");
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
	printf("정수를 입력하세용\n");
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
	printf("3배수 할 정수를 입력하세요");
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
		printf("계산기라능");
		scanf("%d", &num1);
		num2 = num1 + num2;
	}
	printf("%d", num2);
	return 0;
}