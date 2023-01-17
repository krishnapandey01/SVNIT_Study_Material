#include<stdio.h>
int main()
{
	int a[] = {6,2,1, 5, 3};
	int *q;
	q = a;
	printf("%p \n", a);
	printf("%d \n", q);
	q++;
	printf("%d \n", q);
	//a++;
	//q=a[2]
	printf("%p \n", &a);
	printf("%p \n", &q);
	printf("%d \n", a[2]);
	printf("%d \n", *(a+2));
	printf("%d \n", *(2+a));
	printf("%d \n", 2[a]);	
	printf("%d \n", *(q+1));
	printf("%p \n", a+1);
	printf("%p \n", &a+1);
	printf("%p \n", &a[0]+1);
	printf("%d \n", *(a+1));
	printf("%d \n", *a+1);
	return 0;
}
