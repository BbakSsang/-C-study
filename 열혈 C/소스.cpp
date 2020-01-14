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
	printf("박상현\n박 상 현\n 박 상현.\n");
	return 0;
}
*/
/*
#include <stdio.h>
int main()
{
	printf("제 이름은 박상현 입니다\n");
	printf("제 나이는 %d살 이고요", 23);
	printf("제가 사는곳은 이매동 %d입니다", 144);
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

	printf("정수 one: \n");
	scanf("%d", &num1);

		printf("정수 two: \n");
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
	printf("세개의 정수를 입력하시오\n");
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
	
	printf("0.1을 100번 더한 결과: %f \n", num);
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

	printf("1칸 이동결과: %d\n", result1);
	printf("2칸 이동결과: %d\n", result2);
	printf("3칸 이동결과: %d\n", result3);
	return 0;
}
*/
/*
#include <stdio.h>
int main()
{
	int num = -16;
	
	printf("2칸을 오른쪽으로 이동한 결과 %d\n", num >> 2);
	printf("3칸을 오른쪽으로 이동한 결과 %d\n", num >> 3);
	return 0;
}
*/
/*#include <stdio.h>
int main()
{
	int num = 0,num1=0;
	printf("숫자를 입력하세요\n");
	scanf("%d", &num);
	
	num1 = ~num;
	printf("%d", num1);
	return 0;
}
*/ //보수 확인용
/*
#include <stdio.h>
int main()
{
	int num;

		printf("정수를 입력하시오: \n");
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