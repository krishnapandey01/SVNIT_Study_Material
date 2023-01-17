//C program to divide the two number
#include <stdio.h>

int main()
{
    float a, b;
    printf("Enter the two number a and b\n");
    scanf("%f %f", &a, &b);
    if (b == 0)
        printf("%f/%f = Infinite", a, b);
    else
        printf("%0.2f/%0.2f = %0.2f", a, b, a / b);

    return 0;
}