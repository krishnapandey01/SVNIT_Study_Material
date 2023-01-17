#include <stdio.h>

int max(int x, int y) { return (x > y) ? x : y; }

int maxPathSum(int arr1[], int arr2[], int m, int n)
{
    int i = 0, j = 0;

    int result = 0, sum1 = 0, sum2 = 0;

    while (i < m && j < n)
    {

        if (arr1[i] < arr2[j])
            sum1 += arr1[i++];

        else if (arr1[i] > arr2[j])
            sum2 += arr2[j++];

        else
        {
            result += max(sum1, sum2) + arr1[i];

            sum1 = 0;
            sum2 = 0;

            i++;
            j++;
        }
    }

    while (i < m)
        sum1 += arr1[i++];

    while (j < n)
        sum2 += arr2[j++];

    result += max(sum1, sum2);

    return result;
}

int main()
{
    int i, j;

    int arr1[] = {2, 4, 5, 8, 10, 11, 14, 16};

    int arr2[] = {1, 3, 5, 7, 9, 11, 13, 25};

    printf("elements of first array are\n");

    for (i = 0; i < 8; i++)
    {
        printf("%d ", arr1[i]);
    }

    printf("\n");

    printf("elements of second array are\n");

    for (i = 0; i < 8; i++)
    {
        printf("%d ", arr2[i]);
    }

    printf("\n");

    printf("Maximum sum path = ");

    printf("%d", maxPathSum(arr1, arr2, 8, 8));

    return 0;
}