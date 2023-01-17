#include <stdio.h>
#include "my_string.h"

void string_copy(char *str1, char *str2);

int main()
{
    char str1[1000] = "Hello Everyone, Welcome to my world.", str2[1000];
    printf("Before copying, the string: %s \n", str1);

    printf("\nInput a string to copy: ");
    gets(str2);

    string_copy(str1, str2);
}
