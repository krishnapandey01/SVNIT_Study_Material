//Write a program to search for the first occurrence of the character ‘c’ in the given string.
#include <stdio.h>
#include "my_string.h"
void check_for_c(char *str1);

int main()
{
    char str1[100];
   
 printf("TO check first occurance of character 'c'.\n");

    printf("\nEnter your string: ");
    gets(str1);
   
  check_for_c(str1);

    return 0;
}
