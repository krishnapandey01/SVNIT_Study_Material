#include <stdio.h>
int main()
{
    int i,j,row,col;
	printf("Enter number of Rows :");
	scanf("%d",&row);
	printf("Enter number of Cols :");
	scanf("%d",&col);
	int m1[row][col];
	int m2[row][col];
	int result[row][col];
	printf("\nEnter matrix1 elements :\n");
    for(i=0;i< row;i++)
    {
        for(j=0;j< col;j++)
        {
            printf("Enter element [%d,%d] : ",i,j);
            scanf("%d",&m1[i][j]);
        }
    }
    
    printf("\nEnter matrix2 elements :\n");
    for(i=0;i< row;i++)
    {
        for(j=0;j< col;j++)
        {
            printf("Enter element [%d,%d] : ",i,j);
            scanf("%d",&m2[i][j]);
        }
    }
        /*Adding two matrices a and b, and result storing in matrix result*/
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                result[i][j]=m1[i][j]-m2[i][j];
            }
        }
        /*print matrix*/
        printf("\nMatrix after subtraction (result matrix):\n");
        for(i=0;i< row;i++)
    	{
        	for(j=0;j< col;j++)
        	{
            	printf("%d\t",result[i][j]);
        	}
        	printf("\n");   /*new line after row elements*/
    	}       
    return 0;   
}

