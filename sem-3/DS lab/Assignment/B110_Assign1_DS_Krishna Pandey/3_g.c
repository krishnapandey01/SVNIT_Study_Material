#include <stdio.h>
#include <stdlib.h>

void findClosestPair(int first[], int second[], int m, int n, int sum)
{
    int x = 0, y = 0;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (abs(first[i] + second[j] - sum) < abs(first[x] + second[y] - sum))
            {
                x = i;
                y = j;
            }
        }
    }

    printf("The closest pair is [%d, %d]", first[x], second[y]);
}

int main(void)
{
    int first[5] = {1, 8, 10, 12, 20};

    printf("first array is\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", first[i]);
    }

    printf("\n");

    int second[5] = {2, 4, 9, 15, 25};

    printf("second array is\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", second[i]);
    }

    printf("\n");

    int sum;

    printf("enter the sum\n");

    scanf("%d", &sum);

    printf("\n");

    findClosestPair(first, second, 5, 5, sum);

    return 0;
}