//Insert one element at the ‘pth’ position of an array and print the original and modified array.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, p;
    printf("Enter the number of years: ");
    scanf("%d", &x);
    int AUTO[x];

    printf("\nOriginal array is:\n");
    for (int i = 0; i < x; i++)
    {
        AUTO[i] = (rand() % 101) + 250; // number = (rand() % (upper - lower + 1)) + lower ALSO INCLUDE stdlib.h header file
        printf("AUTO[%d] = %d \t", i, AUTO[i]);
    }
    printf("\n\nEnter the position p where number is inserted: ");
    scanf("%d", &p);
    printf("Enter the number to be inserted at pth position: ");
    scanf("%d", &y);
    x++;
    for (int j = x - 1; j>=p; j--)
    {
        AUTO[j] = AUTO[j - 1];
    }
    printf("\nModified array is: \n");
    AUTO[p-1] = y;
    for (int j = 0; j<x; j++)
    {
        printf("AUTO[%d] = %d \t", j, AUTO[j]);
    }

    return 0;
}