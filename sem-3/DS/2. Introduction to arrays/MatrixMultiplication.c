#include<stdio.h>
int main()
{
	int row1, col1, row2, col2;
	printf("Enter the value of number of rows present in matrix1\n");
	scanf("%d",&row1);
	printf("Enter the value of number of columns present in matrix1\n");
	scanf("%d",&col1);
	printf("Enter the value of number of rows present in matrix2\n");
	scanf("%d",&row2);
	printf("Enter the value of number of columns present in matrix2\n");
	scanf("%d",&col2);
	int m1[row1][col1], m2[row2][col2], mul[row1][col2];
	int i, j, k;
	printf("\nEnter the elements of the matrix1\n");
	for(i=0;i<row1;i++)
	{
		for(j=0;j<col1;j++)
		{
			scanf("%d", &m1[i][j]);
		}
	}
	printf("\nGiven matrix 1 is:\n");
	for(i=0;i<row1;i++)
	{
		for(j=0;j<col1;j++)
		{
			printf("%d \t", m1[i][j]);
		}
		printf("\n");
	}
	printf("\nEnter the elements of the matrix2\n");
	for(i=0;i<row2;i++)
	{
		for(j=0;j<col2;j++)
		{
			scanf("%d", &m2[i][j]);
		}
	}
	printf("\nGiven matrix 2 is:\n");
	for(i=0;i<row2;i++)
	{
		for(j=0;j<col2;j++)
		{
			printf("%d \t", m2[i][j]);
		}
		printf("\n");
	}
	if (col1 == row2)
	{
		for(i=0;i<row1;i++)
		{
			for(j=0;j<col2; j++)
			{
				mul[i][j]=0;
				for(k=0;k<col1;k++)
				{
					mul[i][j]=mul[i][j]+m1[i][k]*m2[k][j];
				}
			}
		}
	printf("\nResult of the multiplication is:\n");
	for(i=0;i<row1;i++)
	{
		for(j=0;j<col2;j++)
		{
			printf("%d \t", mul[i][j]);
		}
		printf("\n");
	}
	}
	else
	{
		printf("\nThe matrix multiplication is not possible as there is mismatch in the required dimension\n");
	}
	return 0;
}


