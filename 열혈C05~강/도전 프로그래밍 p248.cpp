//도전 4
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
					printf("크림빵 %d개, 새우깡 %d개, 콜라%d개\n", i, j, k);

	return 0;
}
*/

//도전5
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

//도전 6
/*
#include <stdio.h>

void time(int sec);

int main()
{
	int sec;

	printf("초를 입력하세용 \n");
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
		printf("%d시간%d분%d초", h, m, s);
	}
	else if ((sec % 3600)/60 >= 1)
	{ 
		m = (sec % 3600) / 60;
		s = sec % 60;
		printf("%d분%d초", m, s);
	}
	else
		printf("%d초", sec);

}
*/
//도전7
/*
#include <stdio.h>
int main()
{
	int num, count = 0, temp = 2;
	printf("정수를 입력하세요.: ");
	scanf("%d", &num);

	while (1) {
		if (temp > num) 
			break;

			temp *= 2;
		count++;
	}
	printf("공식을 만족하는 k 의 최댓 값은 %d이다\n", count);
}
*/
//도전 8
/*
#include <stdio.h>

int jae (int num);

int main()
{
	int n=0;
	printf("정수 입력\n");
	scanf("%d", &n);

	printf("2의 %d승은 %d", n, jae(n));
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
