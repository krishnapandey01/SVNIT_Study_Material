//Delete the element at the ‘pth’ position of an array and print the original and modified array.
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{

    int x, p;
    printf("Enter the number of years: ");
    scanf("%d", &x);
    int AUTO[x];

    printf("\nOriginal array is:\n");
    for (int i = 0; i < x; i++)
    {
        AUTO[i] = (rand() % 101) + 250;   // number = (rand() % (upper - lower + 1)) + lower      ALSO INCLUDE stdlib.h header file
        printf("AUTO[%d] = %d \t", i, AUTO[i]);
    }
    printf("\n\nEnter the position 'p' of number to be deleted: ");
    scanf("%d", &p);

    AUTO[p-1] = '\0';

    for (int j = p-1; j<=x; j++)
    {
        AUTO[j] = AUTO[j+1];
    }
   
    printf("\nModified array is: \n");
    for (int j = 0; j<x-1; j++)
    {
        printf("AUTO[%d] = %d \t", j, AUTO[j]);
    }

    return 0;
}