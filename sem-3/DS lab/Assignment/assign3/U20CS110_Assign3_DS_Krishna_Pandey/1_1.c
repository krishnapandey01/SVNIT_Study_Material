// Write a program to find the length of a given string.

#include <stdio.h>
#include "my_string.h"

int str_length(char *str);

int main()
{
  char str[100];
  int z;

  printf("Enter your string: ");
  gets(str);

  z = str_length(str);
  printf("length of your string is: %d", z);

  return 0;
}