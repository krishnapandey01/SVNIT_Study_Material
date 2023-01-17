//Write a program to replace all vowels with star (*) and consonants with hash (#) of string.
#include <stdio.h>
#include "my_string.h"
void replace_vowel_conso(char *x);

int main()
{
    char y[100];

    printf("Enter your string: ");
    gets(y);
    replace_vowel_conso(y);

    return 0;
}
