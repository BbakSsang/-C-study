/*
#include <stdio.h>
int main()
{
	int num1 = 100, num2 = 100;
	int* pnum;

	pnum = &num1;
	(*pnum) += 30;

	pnum = &num2;
	(*pnum) -= 30;

	printf("num1:%d,num2;%d\n", num1, num2);
	return 0;
}
*/
//헷갈리면 이걸로 확인해봐!
/*
#include <stdio.h>
int main()
{
	int num1 = 10, num2 = 10;
	int* ptr1 = &num1;
	int * ptr2 = &num2;

	(ptr1) += 10;
	(*ptr2) += 10;

	printf("num1:%d num1:%d ptr1:%d ptr2:%d \n", num1, num2, ptr1, *ptr2);

	return 0;

}
*/
/*248페이지 문제2
#include <stdio.h>
int main()
{
	int num1 = 10, num2 = 20;
	int* ptr1 = &num1, * ptr2 = &num2;

	(*ptr1) += 10;
	(*ptr2) -= 10;

	(*ptr1) &num2;// 이걸 (*ptr1)=&num2; 책에서 포인터변수를 ptr1이 num2, ptr2가 num1을 가르키래 
	(*ptr2) &num1;//(*ptr1)=&num1; 하면 에러가 뜨는데...  =가 없으니까 바뀌질 않네 결과값이????;;;;

	printf("ptr1=%d, ptr2=%d", *ptr1, *ptr2);
	return 0;
}
*/
