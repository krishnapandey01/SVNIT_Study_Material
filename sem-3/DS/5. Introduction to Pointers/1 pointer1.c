#include<stdio.h>
int main()
{
	//int a[] = {6,2,1,5,3};
	int b =10;
	int *p;
	p=&b;
	printf("%d \n", b);
	printf("%d \n", *p);
	printf("%p \n", &b);
	printf("%p \n", p);
	return 0;
}





