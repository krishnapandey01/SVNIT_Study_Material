#include<stdio.h>
int main()
{
	int a[3][3]={6, 2, 5, 0, 1, 3, 4, 9, 8};
	int *p;
	p=&a[0][0];
	printf("%u \n", p);
	printf("%u \n", &a[0][0]);
	p=a[0];
	printf("%u \n", p);
	printf("%u \n", a);
	printf("%u \n", &a);
	printf("%u \n", *a);
	printf("%u \n", a[0]);
	printf("%u \n", a+1);
	printf("%u \n", &a[1]);
	printf("%u \n", *(a+1));
	printf("%u \n", a[1]);
	printf("%u \n", &a[1][0]);
	printf("%u \n", *(a+1)+2);
	printf("%d \n", *(*(a+1)+2));
	printf("%d \n", *(*a+1));
	return 0;
}
	
