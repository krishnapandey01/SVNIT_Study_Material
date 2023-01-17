#include <stdio.h>

int main()
{
    int fibonacci[10];

    fibonacci[0] = 0;
    fibonacci[1] = 1;

    for (int i = 2; i < 10; i++)
    {
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }

    for (int i = 0; i < 10; i++)
    {
        printf(" %d ", fibonacci[i]);
    }
    printf("\n");

    return 0;
}