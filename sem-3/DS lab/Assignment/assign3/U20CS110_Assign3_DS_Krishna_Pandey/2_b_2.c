//Delete an element from the end of an array and print the original and modified array.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Enter the number of years: ");
    scanf("%d", &x);
    int AUTO[x];

    printf("\nOriginal array is:\n");
    for (int i = 0; i < x; i++)
    {
        AUTO[i] = (rand() % 101) + 250; // number = (rand() % (upper - lower + 1)) + lower ALSO INCLUDE stdlib.h header file
        printf("AUTO[%d] = %d \t", i, AUTO[i]);
    }
    printf("\n\nNumber is deleted from end: ");
    --x;

    printf("\nModified array is: \n");
    for (int j = 0; j <x; j++)
    {
        printf("AUTO[%d] = %d \t", j, AUTO[j]);
    }

    return 0;
}