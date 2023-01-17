//Write a program to concat two given strings.
#include <stdio.h>
#include "my_string.h"
void string_concatenation(char *str1, char *str2);

int main()
{
    char str1[500], str2[100];

    printf("Enter your string 1: ");
    gets(str1);
    printf("Enter your string 2: ");
    gets(str2);

    string_concatenation(str1, str2);

    return 0;
}
