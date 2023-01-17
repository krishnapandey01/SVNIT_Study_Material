#include<stdio.h>
#define N 10
	int main()
	{
		int ratingCounters[6] = {0, 0, 0, 0, 0, 0}, i, response;
		printf("Enter your responses \n");
		for(i=1; i<=N; ++i)
		{
			scanf("%d", &response);
			if(response < 1 || response > 5)
			{
				printf("Bad response : %d \n", response);
			}
			else
			{
				++ratingCounters[response];
			}
		}
		printf("\n \n Rating Number of Responses \n");
		printf("-------- ---------------- \n");
		for(i=1; i<=5; ++i)
		{
			printf("%d %d\n", i, ratingCounters[i]);
		}
		return 0;
	}
