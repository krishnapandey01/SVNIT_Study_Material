//Write a program to compare two given strings.

#include <stdio.h>
#include "my_string.h"

void compareStrings(char* x, char* y);

int main()
{
	char s1[100], s2[100];
    printf("Enter the first string : ");
    gets(s1);
    printf("Enter the second string : ");
    gets(s2);
	compareStrings(s1, s2);
	return 0;
}

