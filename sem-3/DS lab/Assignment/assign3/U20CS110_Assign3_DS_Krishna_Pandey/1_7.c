//Write a program to generate the reverse of a string.
#include <stdio.h>
#include "my_string.h"

void reverse_string(char *str);

int main()
{
    char str[100];
    printf("Enter the string is: ");
    gets(str);

    reverse_string(str);

    return 0;
}
