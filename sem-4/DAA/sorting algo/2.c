#include <stdio.h>
#define SIZE 10

void bubble_sort(int n, int arr[])
{
    int temp;

    for (int j = 0; j < n - 1; j++)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
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

    bubble_sort(SIZE, arr);

    return 0;
}