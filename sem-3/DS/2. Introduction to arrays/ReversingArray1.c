#include<stdio.h>
int main()
{
		int i, size, numberSearch;
		printf("Enter the number of elements in an array \n");
		scanf("%d", &size);
		int array[size];
		printf("Enter the value of an array elements \n");
		for(i=0; i<size; i++)
		{
			scanf("%d", &array[i]);
		}
		printf("You have entered the following array elements: \n");
		for(i=0; i<size; i++)
		{
			printf("%d \n", array[i]);
		}
		printf("After reversing the array elements are as follows \n");
		for(i=size-1; i>=0; i--)
		{
			printf("%d \n", array[i]);
		}
	}

