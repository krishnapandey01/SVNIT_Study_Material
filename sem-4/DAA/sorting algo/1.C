#include <stdio.h>

int search(int x, int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
            return 1;
    }

    return 0;
}

int main()
{
    int n, y;
    printf("enter the size of array");
    scanf("%d", &n);

    int arr[n], x;
    printf("enter array");

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("enter the number you want to search");

    scanf("%d", &x);

    y = search(x, arr, n);

    if (y)
        printf("search done");
    else
        printf("element not found");

    return 0;
}