#include <stdio.h>

int main()
{
    int arr1[6] = {11, 12, 11, 15, 12, 17};

    int counter = 0;

    int i, j, k;

    printf("the elements of the array are\n");

    for (i = 0; i < 6; i++)
    {
        printf("%d ", arr1[i]);
    }

    printf("\n");

    printf("unique elements of the array are:  ");

    for (i = 0; i < 6; i++)
    {
        counter = 0;
        for (j = 0, k = 6; j < k + 1; j++)
        {
            if (i != j)
            {
                if (arr1[i] == arr1[j])
                {
                    counter++;
                }
            }
        }

        if (counter == 0)
        {
            printf("%d ", arr1[i]);
        }
    }

    return 0;
}