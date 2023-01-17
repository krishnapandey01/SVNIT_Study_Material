#include <stdio.h>

int main()
{

    int n, i, j;

    printf("\nEnter the number of elements : ");
    scanf("%d", &n);

    int arr[n];

    printf("\nInput the array elements : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nOriginal array : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    j = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            if (i != j)
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            j++;
        }
    }
    printf("\nRearranged array : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
