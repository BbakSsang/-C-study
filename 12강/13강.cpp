/*
#include <stdio.h>
int main()
{
	int arr[3] = { 0,1,2 };
	printf("배열의 이름: %p\n", arr);
	printf("첫 번쩨 요소: %p\n", &arr[0]);
	printf("두 번째 요소; %p\n", &arr[1]);
	printf("세 번째 요소: %p\n", &arr[2]);
	//arr=&arr[i]//이 문장은 컴파일 에러를 일으킨
	다
	return 0;
}
*/
/*
#include <stdio.h>
int main()
{
	int * ptr1 = 0x0010;
	double * ptr2 = 0x0010;

	printf("%p %p \n", ptr1 + 1, ptr1 + 2);
	printf("%p %p \n", ptr2 + 1, ptr2 + 2);

	printf("%p %p \n", ptr1, ptr2);
	ptr1++;
	ptr2++;

	printf("%p %p \n", ptr1, ptr2);
	return 0;
}
*/

/*
#include <stdio.h>
int main()
{
	int arr[3] = { 11,22,33 };
	int* ptr = arr;
		printf("%d %d %d \n", *ptr, *(ptr + 1), *(ptr + 2));

	printf("%d", *ptr); ptr++;
	printf("%d", *ptr); ptr++;
	printf("%d", *ptr); ptr--;
	printf("%d", *ptr); ptr--;
	printf("%d", *ptr); printf("\n");
	return 0;
}
*/
/* 문제 13-1

#include <stdio.h>
int main()
{
	int arr[5] = { 1,2,3,4,5 };
	int* ptr = arr;

	for (int i = 0; i < 5; i++)
	{
		*(ptr+i)+=2;
		printf("%d\n", *(ptr + i));
	}
	return 0;
}
*/
/*
#include <stdio.h>
int main()
{
	int arr[5] = { 1,2,3,4,5 };
	int* ptr =&arr[4];
	int temp = 0;

	for (int i = 0; i < 5; i++)
	{

		temp += *ptr;
		ptr--;
	}

	printf("%d", temp);
	return 0;
}
*/
/*
#include <stdio.h>

void show(int* parem, int len)
{
	int i;
	for (i = 0; i < len; i++)
		printf("%d", parem[i]);
	printf("\n");
}


void add(int* parem, int len, int add)
{
	int i=0;
	for (i =0; i < len; i++)
		parem[i] += add;
}

int main()
{
	int arr1[3] = { 1,2,3 };
	int arr2[5] = { 4,5,6,7,8 };
	show(arr1, sizeof(arr1) / sizeof(int));
	show(arr2, sizeof(arr2) / sizeof(int));
	return 0;
}
*/
/* 함수 안에서의 값 변경은 저장된 값변경과 이어지지 않는다
#include<stdio.h>

void Swap(int n1, int n2)
{
	int temp = n1;
	n1 = n2;
	n2 = temp;
	printf("n1 n2: %d, %d\n", n1, n2);
}

int main()
{
	int num1 = 10;
	int num2 = 20;
	printf("num1 num2: %d, %d\n", num1, num2);

	Swap(num1, num2);
	printf("num1 num2: %d, %d", num1, num2);
	return 0;
}
*/
/*
#include <stdio.h>

void squared(int* n1)
{
	int square;
	square = (*n1) * (*n1);
	printf("%d", square);
}
int main()
{
	int num1 = 0;

	printf("제곱할 수를 입력하시오");
	scanf("%d", &num1);

	squared(&num1);
	printf("%d", num1);
	return 0;
}
*/
/*
#include <stdio.h>

int main()
{
	int arr[3] = { 15,25,35 };
	int* ptr = &arr[1];// 포인터 ptr=arr배열을 1부터 가르킨다

	printf("%d %d \n", ptr[0], arr[0]);
	printf("%d %d \n", ptr[1], arr[1]);
	printf("%d %d \n", ptr[2], arr[2]);
	printf("%d %d \n", *ptr, *arr);
	return 0;
} */
/*
#include<stdio.h>
int main()
{
	int* ptr1 = 0x0010;
	double* ptr2 = 0x0010;

	printf("%p %p \n", ptr1 + 1, ptr1 + 2);
	printf("%p %p \n", ptr2 + 1, ptr2 + 2);

	printf("%p %p \n", ptr1, ptr2);
	ptr1++;
	ptr2++;

	printf("%p %p \n", ptr1, ptr2);
	return 0;
}
*/
/*
#include <stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5 };
	int* ptr = arr;

	for (int i = 0; i < 5; i++)
	{	
		*(ptr+i) += 2;
		
		printf("%d\n", arr[i]);
		
	}
	for (int i = 0; i < 5; i++)
	{
		
		printf("%d\n", ptr[i]);
	}
	return 0;
}
*/
/*
#include <stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5 };
	int* ptr = &arr[4];
	int sum = 0;

	for (int i = 0; i < 4; i++)
	{
		sum += *(ptr--);
		
	}


	printf("%d", sum);
	return 0;
}
*/
/*
#include <stdio.h>
int main()
{
	int arr[6] = { 1,2,3,4,5,6 };
	int* front = &arr[0];
	int* back = &arr[5];

	int temp = 0;
	for (int i = 0; i < 3; i++)
	{
		temp = *front;
		*front = *back;
		*back = temp;
		*(front++);
		*(back--);
	}
	for (int i = 0; i < 6; i++)
		printf("%d", arr[i]);


	return 0;
}
*/
