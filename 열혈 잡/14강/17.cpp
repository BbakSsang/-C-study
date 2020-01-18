#/*include <stdio.h>
int main()
{
	double num = 3.14;
	double* ptr = &num;
	double** dptr = &ptr;
	double* ptr2;

	printf("%9p %9p \n", ptr, *dptr);
	printf("%9g %9g \n", num, **dptr);
	ptr2 = *dptr;//ptr2=ptr
	*ptr2 = 10.99;
	printf("%9g %9g\n", num,* * dptr);
	return 0;

}
*/
/*
#include <stdio.h>
void swap(int** p1, int** p2)
{
	int *temp = *p1;
		*p1 = *p2;
		*p2 = temp;
}

int main()
{
	int num1 = 10, num2 = 20;
	int* ptr1, * ptr2;
	ptr1 = &num1, ptr2 = &num2;
		printf("*ptr1,*ptr2: %d %d \n", *ptr1, *ptr2);

	swap(&ptr1, &ptr2);
	printf("*ptr1,*ptr2:%d %d \n", *ptr1, *ptr2);
	return 0;
}
*/
#include <stdio.h>
int main()
{
	int num1 = 10, num2 = 20, num3 = 30;
	int* ptr1 = &num1;
	int* ptr2 = &num2;
	int* ptr3 = &num3;

	int ptrarr[] = { *ptr1,*ptr2,*ptr3 };


	printf("%d %d %d \n", (ptrarr[0]),  (ptrarr[1]),(ptrarr[2])) ;

	return 0;
}