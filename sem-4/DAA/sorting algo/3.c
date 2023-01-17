#include <stdio.h>
#define SIZE 10

void selection_sort(int n, int arr[])
{
    int temp, swap;
    for (int j = 0; j < n; j++)
    {
        for (int i = j; i < n - 1; i++)
        {
            if (arr[i] < arr[i + 1])
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        swap = arr[j];
        arr[j] = arr[n-1];
        arr[n-1] = swap;
    }
    printf("sorted array is: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}

int main()
{
    int arr[SIZE];

    printf("enter your unsorted array");
    for (int i = 0; i < SIZE; i++)
        scanf("%d", &arr[i]);

    selection_sort(SIZE, arr);

    return 0;
}