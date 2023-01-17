#include <stdio.h>

int main()
{
    int arr1[5] = {2, 5, 3, 4, 8};

    int arr2[5] = {1, 7, 6, 9, 10};

    int arr3[10];

    int i, j, k;

    printf("First array: ");

    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr1[i]);
    }

    printf("\n");

    printf("Second array: ");

    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr2[i]);
    }

    printf("\n");

    /* inserting in third array */

    for (i = 0; i < 5; i++)
    {
        arr3[i] = arr1[i];
    }

    for (j = 0; j < 5; j++)
    {
        arr3[i] = arr2[j];
        i++;
    }

    for (i = 0; i < 10; i++)
    {
        for (k = 0; k < 9; k++)
        {
            if (arr3[k] <= arr3[k + 1])
            {
                j = arr3[k + 1];
                arr3[k + 1] = arr3[k];
                arr3[k] = j;
            }
        }
    }

    printf("the merged array in descending order is\n");

    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr3[i]);
    }

    return 0;
}