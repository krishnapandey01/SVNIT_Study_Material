//Delete an element from the beginning of an array and print the original and modified array.
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
        AUTO[i] = (rand() % 101) + 250;
        printf("Index %d = %d\n", i, AUTO[i]);
    }

    return 0;
}