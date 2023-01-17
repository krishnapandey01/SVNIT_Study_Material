#include<stdio.h>
#define N 10
int main(void)
{
	int Fib[N];
	int i;
	Fib[0] = 0;
	Fib[1] = 1;
	for(i=2; i<N; i++)
	{
		Fib[i]=Fib[i-1]+Fib[i-2];
	}
	for(i=0; i<N; i++)
	{
		printf("Fib[%d] = %d \n", i, Fib[i]);
	}
}
