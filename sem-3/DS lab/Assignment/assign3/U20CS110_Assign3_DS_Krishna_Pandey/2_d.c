//Write a program to print the index during which more than 300 automobiles were sold.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int x, j;
    printf("Enter the number of years: ");
    scanf("%d", &x);
    int AUTO[x];

    srand(time(NULL));

    printf("\nOriginal array is:\n");
    for (int i = 0; i < x; i++)
    {
        AUTO[i] = (rand() % 101) + 250; // number = (rand() % (upper - lower + 1)) + lower ALSO INCLUDE stdlib.h header file
        printf("AUTO[%d] = %d\t", i, AUTO[i]);
    }
    printf("\n\n The year when more than 300 automobiles were sold are: \n");

    for (j = 0; j<x; j++)
    {if(AUTO[j]>300)
        printf("%d year i.e. AUTO[%d] = %d \n",j+1, j, AUTO[j]);
        else
        ;
    }

    return 0;
}