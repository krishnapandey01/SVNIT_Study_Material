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
		int min = array[0];
		for(i=0; i<size; i++)
		{
			if(array[i]<min)
			{
				min = array[i];
			}
		}
		printf("The minimum element in the array is %d", min);
	}

