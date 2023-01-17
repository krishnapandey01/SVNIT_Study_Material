#include <stdio.h>
int main()
{
	int i,j,row,col;
	int sum,product;
	printf("Enter number of Rows :");
	scanf("%d",&row);
	printf("Enter number of Cols :");
	scanf("%d",&col);
	int matrix[row][col];
	printf("\nEnter matrix elements :\n");
	for(i=0;i< row;i++)
	{
		for(j=0;j< col;j++)
		{
			printf("Enter element [%d,%d] : ",i,j);
			scanf("%d",&matrix[i][j]);
		}
	}
	/*sum and product of all elements*/
	/*initializing sum and product variables*/
	sum		=0;
	product	=1;
	for(i=0;i< row;i++)
	{
		for(j=0;j< col;j++)
		{
			sum		+=	matrix[i][j];
			product	*=	matrix[i][j];
		}
	}
	printf("\nSUM of all elements : %d \nProduct of all elements :%d",sum,product);
	return 0;	
}

