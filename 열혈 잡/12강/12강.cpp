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
//�򰥸��� �̰ɷ� Ȯ���غ�!
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
/*248������ ����2
#include <stdio.h>
int main()
{
	int num1 = 10, num2 = 20;
	int* ptr1 = &num1, * ptr2 = &num2;

	(*ptr1) += 10;
	(*ptr2) -= 10;

	(*ptr1) &num2;// �̰� (*ptr1)=&num2; å���� �����ͺ����� ptr1�� num2, ptr2�� num1�� ����Ű�� 
	(*ptr2) &num1;//(*ptr1)=&num1; �ϸ� ������ �ߴµ�...  =�� �����ϱ� �ٲ��� �ʳ� �������????;;;;

	printf("ptr1=%d, ptr2=%d", *ptr1, *ptr2);
	return 0;
}
*/
