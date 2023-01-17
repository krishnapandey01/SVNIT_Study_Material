#include<stdio.h>
#define N 10
int main()
{
	int p, i, primes[N], primeIndex;
	int isPrime;
	primes[0] = 2;
	primes[1] = 3;
	primeIndex = 2;
	for (p=5; p<=N; p=p+2)
	{
		isPrime=1;
		for(i = 1; i < primeIndex; i++)
		{
			if(p%primes[i] == 0)
			{
				isPrime = 0;
			}
		}
		if(isPrime == 1)
		{
			primes[primeIndex] = p;
			++primeIndex;
		}
	}
	for(i=0; i < primeIndex; i++)
	{
		printf("%d \t", primes[i]);
	}
	printf("\n");
	return 0;
}
