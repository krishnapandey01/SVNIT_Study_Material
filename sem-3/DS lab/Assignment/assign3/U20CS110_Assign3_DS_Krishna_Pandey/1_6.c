//Write a program to find substring is there in given string or not?
#include <stdio.h>
#include "my_string.h"
void search_substring(char *str, char *sub_string);

int main()
{
    char str[100], sub_string[100];

    printf("Enter a string: ");
    gets(str);
    printf("Enter search substring: ");
    gets(sub_string);

    search_substring(str, sub_string);

    return 0;
}