//Create an array named AUTO which stores random elements ranging from 250-350 which denotes the number of automobiles sold during the last 30 years.
// a) Write a program toInsert one element in the beginning of an array and print the original and modified array.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    printf("Enter the number of years: ");
    scanf("%d", &x);
    int AUTO[x];

    printf("\nOriginal array is:\n");
    for (int i = 0; i < x; i++)
    {
        AUTO[i] = (rand() % 101) + 250; 
        printf("AUTO[%d] = %d \t", i, AUTO[i]);
    }
    printf("\n\nEnter the number to be inserted at begining: ");
    scanf("%d", &y);
    x++;
    for (int j = x - 1; j >= 0; j--)
    {
        AUTO[j] = AUTO[j - 1];
    }
    printf("\nModified array is: \n");
    AUTO[0] = y;
    for (int j = 0; j<x; j++)
    {
        printf("AUTO[%d] = %d \t", j, AUTO[j]);
    }

    return 0;
}