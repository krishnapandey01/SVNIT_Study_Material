#include<stdio.h>
int main()
{
		int i, size;
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
		for(i=0; i<=size/2; i++)
		{
			int temp = array[i];
			array[i] = array[size-i-1];
			array[size-i-1] = temp;
		}	
		printf("After reversing the array elements are as follows: \n");
		for(i=0; i<size; i++)
		{
			printf("%d \n", array[i]);
		}
	}

