/*#include <stdio.h>

void show(int *param, int len)
{
	int i;

	for (i = 0; i < len; i++)
	printf("%d", param[i]);
	printf("\n");
}

int main()
{
	int arr1[3] = { 1,2,3 };
	int arr2[5] = { 4,5,6,7,8 };
	show(arr1,3);
	show(arr2,5);
	return 0;
}
*/
/*
#include <stdio.h>

void value(int n1)
{
	n1 *= n1;
	printf("%d\n", n1);
}

void refe(int* n1)
{
	*n1 = (*n1)* (*n1);
		printf("%d\n",  *n1);
}
int main()
{
	int num;
	printf("재곱할 값을 입력하시오 \n");
	scanf("%d", &num);

	value(num);
	refe(&num);
	printf("%d",num);
	return 0;
}
*/
/*
#include <stdio.h>

void swap(int* n1, int* n2, int* n3)
{
	int temp;
	temp = *n1;
	*n1 = *n3;
	*n3 = *n2;
	*n2 = temp;
}
int main()
{
	int n1, n2, n3;
	printf("세 정수를 입력하세용\n");
	scanf("%d %d %d", &n1, &n2, &n3);

	swap(&n1, &n2, &n3);
	printf("%d,%d,%d", n1, n2, n3);
	return 0;
}*/
/*/////////////도전 프로그래밍 2
도전1

#include <stdio.h>

void even(int *arr)
{
	for (int i=0; i < 10; i++)
	{
		if (arr[i] % 2 == 0)
			printf("%d ", arr[i]);
	}
}
void odd(int *arr)
{
	for (int i=0; i < 10; i++)
	{
		if (arr[i] % 2 == 1)
			printf("%d ", arr[i]);
	}
}


int main()
{
	int arr[10];
	printf("10개의 상수를 입력하시오\n");
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}

	printf("홀수: \n");
	odd(arr);

	printf("\n짝수: \n");
	even(arr);
		return 0;
}
*/

/* 문제 2 내가 푼거
#include <stdio.h>
int main()
{
	int num;
	printf("정수를 입력하시오 ");
	scanf("%d", &num);

	int arr[10];

	for (int i = 0; i <10 ; i++)
	{
		if (num % 2 == 0)
		{
			num /= 2;
			arr[(9-i)] = 0;
		}
		else
		{
			num /= 2;
			arr[(9-i)] = 1;
		}
	}
	for (int i = 0; i < 10; i++)
		printf("%d", arr[(i)]);
		
	return 0;
}
*/
/*  왜 에러인지 나중에 알았는데 /=를 하면 소수점이 나올수도 있는데 int 형이라서 소수점은 버리고 계산해서 맞게 된건지
include <stdio.h>
int main()
{
	int num;
	printf("정수를 입력하시오 ");
	scanf("%d", &num);

	int arr[5];
	int i = 0;

	while (num != 0);
	{arr[i] = num % 2;
	num /= 2;
	i++;
	}

	while (i > 0)
	{
		printf("%d", arr[i]);
		i--;
	}
	return 0;

}
*/
/*
#include <stdio.h>
int main()
{
	int arr[9];
	printf("정수를 입력하라 \n");
	
	for (int i = 0; i < 10; i++)
	{
		printf("입력: ");
		scanf("%d", &arr[i]);
	}
	printf("배열 요소의 출력: "); 

	for (int i = 0; i < 10; i++)
		arr[i] / 2 == 0
		arr[i]=



	while
}
*/
/*
#include <stdio.h>
int main()
{
	int A, B;
	printf("정수를두개 입력하시오\n");
	scanf("%d %d", &A, &B);

	if (A > B)
		printf(">");

	else if (A < B)
		printf("<");
	else
		printf("==");
}
*/
/*
#include <stdio.h>
int main()
{
	int grade;
	scanf("%d", &grade);

	if (grade >= 90)
		printf("A");
	else if (grade >= 80)
		printf("B");
	else if (grade >= 70)
		printf("C");
	else if (grade >= 60)
		printf("D");
	else
		printf("F");

	retrun 0;
}
*/
/*
#include <stdio.h>
int main()
{
	int arr[8];
	int i = 0;
	int temp = 0;

	for (int i = 0; i < 8; i++)
		scanf("%d", &arr[i]);



	while (arr[0] == 1)
	{
		for (int i = 0; i < 8; i++)
			if (arr[i] == (i + 1))
			{
				temp++;
			}

		if (temp == 8)
		{
			printf("ascending");
			return 0;
		}
		else
			break;
	
	}
	temp = 0;
	while (arr[0] == 8)
	{
		for (int i = 0; i < 8; i++)
			if (arr[i] == (8 - i))
			{
				temp++;
			}

		if (temp == 8)
		{
			printf("descending");
			return 0;
		}
		else
			break;
	}


	printf("mixed");
	return 0;
}
*/

#include <stdio.h>


int main()
{
	int arr[10];
	int temp = 0;
	int A, B, C;
	int multiply;

	scanf("%d %d %d", &A, &B, &C);

	multiply = A * B * C;

	printf("%d", multiply);

	if (multiply >= )
	{
		for (int i = 0; i < 9; i++)
		{
			arr[i] = multiply / (10 ^ (8 - i));

			temp++;
		}
	}
	else if (multiply >= 10000000)
	{
		for (int i = 0; i < 8; i++)
		{
			arr[i] = multiply / (10 ^ (7 - i));

			temp++;
		}
	}

	else if (multiply >= 1000000)
	{
		for (int i = 0; i < 7; i++)
		{
			arr[i] = multiply / (10 ^ (6 - i));

			temp++;
		}
	}
	else
		return 0;

	



}

