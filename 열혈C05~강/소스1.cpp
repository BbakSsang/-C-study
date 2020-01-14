/*
#include<stdio.h>
int main()
{
	int num1 = 1, num2 = 0;


	while (num1 != 0)
	{
		printf("계산기라능");
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
		printf("정수입력 0큇\n");
		scanf("%d", &num);
		total += num;
	}
	printf("합계 =%d", total);
	return 0;
}
*/
/*

#include <stdio.h>
int main()
{
	int input = 0, total = 0;
	int num = 0;
	printf("입력할 정수의 갯수 \n");
		scanf("%d", &input);

	while (num++ < input)
	{
		printf("정수 입력\n");
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
		printf("정수 입력 (%d개 남음): \n", count);
			scanf("%d", &input);
			total += input;
			count--;
			i++;
			while (input < 1)
			{
				printf("정수 다시입력 (%d개 남음)\n",count+1);
					scanf("%d", &input);
				total += input;
			}

	}
	printf("정수의 합계 = %d", total);
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
		printf("정수 입력(0 to quit): ");
		scanf("%d", &num);
		total += num;
	} while (num != 0);
	printf("합계: %d \n", total);
	return 0;
}
*/
/*
#include <stdio.h>
int main()
{
	int num = 0, total = 0;

	printf("정수를 입력하세요 0누르면 꺼집니다 ");
	scanf("%d", &num);
	while (num != 0)
	{
		total += num;
		printf("정수를 입력하세요 0누르면 꺼집니다 ");
		scanf("%d", &num);
	}
	printf("합계: %d", total);
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
		printf("짝수의 합계는 %d", total);
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
		printf("평균구할 수 들을 입력하시오");
		scanf("%lf", &input);
		num++;
	}
	printf("평균의 값은 %lf", total / (num - 1));
	return 0;
}
*/
/*
#include <stdio.h>
int main()
{
	int input1=0, input2=0;
	int total = 0;
	printf("첫 번째 정수를 입력해주세요 ");
	scanf("%d", &input1);

	printf("두 번째 정수를 입력해주세요 ");
	scanf("%d", &input2);

	for (int i = input1; i < input2+1; i++)
	{
		total += i;
	}
	printf("정수의 총 합은 %d", total);
	return 0;
}
*/
/*
#include <stdio.h>
int main()
{
	int num = 0;
	int total = 1;
	
	printf("펙토리얼을 구할정수를 입력하자 !");
	scanf("%d", &num);
	for (int i = 1; i < num+1 ; i++)
	{
		total = total * i;
	}
	printf("펙토리얼을 구해봅시다! %d", total);
	return 0;
}*/
/*
#include <stdio.h>
int main()
{
	int num;
	printf("정수 입력 ");
	scanf("%d", &num);

	if (num < 0)
		printf("입력값이 0보다 작습니다");
	
	if (num > 0)
		printf("입력값이 0보다 큽니다");
	if (num == 0)
		printf("입력값은 0입니다");
	return 0;
	*/
/*
#include <stdio.h>
int main()
{
	int num, abs;
	printf("정수 입력: ");
	scanf("%d", &num);

		abs = num > 0 ? num : num * (-1);
	printf("양의 정수는 %d", abs);
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

	printf("첫번째 정수를 입력하세요 \n");
	scanf("%d", &num1);
	printf("두번쨰 정수를 입력하세여\n");
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
		printf("성적을 입력하세요(순서대로 국어, 영어, 수학 \n");
		scanf("%d", &num);

		total += num;
	}
	printf("%d", total);
	if (total / 3 >= 90)

		printf("축하합니다 A입니다\n");

	else if (total / 3 >= 80)

		printf("축하합니다 B입니다\n");

	else if (total / 3 >= 70)

		printf("축하합니다 C입니다\n");

	else if (total / 3 >= 50)

		printf("축하합니다 D입니다\n");

	else (total / 3 >= 90);
	printf("자넨 낙젤세");

	
	return 0;
}
*/
/*
#include <stdio.h>
int main()
{
	int a = 0, b = 0, ans = 0;

	printf("1정수입력 \n");
	scanf("%d", &a);

	printf("2정수입력 \n");
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
	printf("0이상의 정수를 입력하라 \n");
	scanf("%d", num);
	
	while (num < 30)
	{
		num++;

		switch (num)
		{
		case 9:
			printf("0이상10미만");


		case 19:
			printf("10이상20미만");


		case 29:
			printf("20이상30미만");

		default:
			printf("30이상");
			break;
		}

	}
	return 0;
} ///질문!!!!!!! 200p
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
	printf("덧셈결과1 : %d \n", result);
	result = Add(5, 8);
	printf("덧셈결과 :%d\n", result);
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
	printf("3과4중에서 큰 수는 %d이다\n", number(3, 4));
	printf("5과4중에서 큰 수는 %d이다\n", number(5, 4));
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
	printf("두개의 정수 입력 :");
	scanf("%d %d", &num1, &num2);

	printf("%d와 %d중 절댓값이 더 큰 정수 :%d", num1,num2, absocom(num1, num2));
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
	printf("3개의 정수를 입력해주세요 \n");
	scanf("%d %d %d", &num1, &num2, &num3);

	printf("3수중 가장 큰 수는 %d입니다\n", big(num1,num2,num3));
	printf("3수중 가장 작은 수는 %d입니다", small(num1,num2,num3));
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
	printf("섭씨변환 1, 화씨변환 2");
	scanf("%d", &what);

	if (what == 1)
	
		printf("섭씨 온도를 입력하시오\n");
		scanf("%Lf", &C);
		printf("%Lf", FahToCel(C));
	

	else (what == 2)
	
		printf("화씨 온도를 입력하시오\n");
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