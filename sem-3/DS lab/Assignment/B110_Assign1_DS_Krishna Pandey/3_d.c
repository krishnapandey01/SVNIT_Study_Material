#include <stdio.h>

int main()
{
	int i, j, row1, column1, row2, column2, arr1[10][10], arr2[10][10], flag;

	printf("Enter Number of rows and columns of first matrix : ");
	scanf("%d %d", &row1, &column1);

	printf("Enter Number of rows and columns of second matrix : ");
	scanf("%d %d", &row2, &column2);

	printf("Enter the First Matrix Elements:\n");
	for (i = 0; i < row1; i++)
	{
		for (j = 0; j < column1; j++)
		{
			scanf("%d", &arr1[i][j]);
		}
		
	}
	printf("\n");

	printf("Please Enter the Second Matrix Elements:\n");
	for (i = 0; i < row2; i++)
	{
		for (j = 0; j < column2; j++)
		{
			scanf("%d", &arr2[i][j]);
		}

		
	}
	   printf("\n");
	flag = 1;

	if (row1 == row2 && column1 == column2)
	{

		for (i = 0; i < row1; i++)
		{
			for (j = 0; j < column1; j++)
			{
				if (arr1[i][j] != arr2[i][j])
				{
					flag = 0;
					break;
				}
			}
		}
		if (flag == 1)
		{
			printf("\n Matrix a is Equal to Matrix b");
		}
		else
		{
			printf("\n Matrix a is Not Equal to Matrix b");
		}
	}

	else
	{
		printf("matrix cannot be compared");
	}

	return 0;
}