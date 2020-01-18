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

	printf("배열요소에 저장된 값의 합: %d \n", sum);
	return 0;
}
*/
/*
//문제 11-1
#include<stdio.h>
int main()
{
	int arr[5];
	int min=0, max=0, sum=0;
	printf("5개의 정수 입력 \n");
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
	printf("MAX는 %d, Min은 %d, SUM은%d", max, min, sum);

	

	return 0;
}
*/
//문제 11-2
/*
#include <stdio.h>
int main()
{
	char arr[10];

	printf("저장할 값을 입력하시오\n");
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
	printf("배열 str의 크기 %d\n", sizeof (str));
	printf("널 문자 문자형 출력: %c\n", str[13]);
	printf("널 문자 정수형 출력: %d\n", str[13]);

	str[12] = '?';
	printf("문자열 출력 %s", str);
	return 0;
}
*/
/*
#include <stdio.h>
int main()
{
	char str[50];
	int idx = 0;

printf("문자열 입력: ");
scanf("%s", str);
printf("입력 받은 문자열 %s\n", str);

printf("문자 단위 출력: ");

while (str[idx] != '\0')
{
	printf("%c", str[idx]);
	idx++;

}

return 0;
}
*/

//문제 11-2-1 p268
/*
#include <stdio.h>
int main()
{
	char arr[50];
	int i = 0;

	printf("영단어를 띄어쓰기 없이 입력하시오 ");
	scanf("%s", arr);

	while (arr[i] != '\0')
	{
		i++;
	}
	printf("길이는 %d 입니다", i);
	return 0;
}
*/
/*
#include <stdio.h>
int main()
{
	char arr[50];
	int i = 0;


	printf("영단어를 띄어쓰기 없이 입력하시오 ");
	scanf("%s", arr);

	while (arr[i] != '\0')
	{
		i++;
	}
	printf("길이는 %d 입니다\n", i);
	printf("%c",arr[4]);
	return 0;
}
*/