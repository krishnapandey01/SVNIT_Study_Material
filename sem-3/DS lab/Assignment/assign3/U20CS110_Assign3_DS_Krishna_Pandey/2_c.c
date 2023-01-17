//Write a program to update the value at the ‘pth’ position with new value.
#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x, p, y;
    printf("Enter the number of years: ");
    scanf("%d", &x);
    int AUTO[x];

    printf("\nOriginal array is:\n");
    for (int i = 0; i < x; i++)
    {
        AUTO[i] = (rand() % 101) + 250;
        printf("AUTO[%d] = %d \t", i, AUTO[i]);
    }
    printf("\n\nEnter the position 'p' of number to be updated and the number: ");
    scanf("%d %d", &p, &y);

    AUTO[p-1] = y;
   
    printf("\nModified array is: \n");
    for (int j = 0; j<x; j++)
    {
        printf("AUTO[%d] = %d \t", j, AUTO[j]);
    }

    return 0;
}