// C program to multiply two unsigned binary numbers

#include <stdio.h>
#include "decimal_to_unsigned_binary.h"
#include "multiplication_unsigned_binary_numbers_U20CS093.h"
#include "binary_to_decimal.h"

int main()
{
    // Define variables
    unsigned int d1, d2, result;
    unsigned long int b1, b2, bin_result;

    // Take input for d1 & d2
    printf("Enter the 2 numbers: ");
    scanf("%d %d", &d1, &d2);

    // Convert d1 & d2 to binary
    b1 = decimal_to_unsigned_binary_U20CS093(d1); 
    b2 = decimal_to_unsigned_binary_U20CS093(d2);

    // Perform multiplication
    bin_result = multiplication_unsigned_binary_numbers_U20CS093(b1, b2);

    // Convert bin_result to decimal result
    result = binary_to_decimal(bin_result);

    // Print the result
    printf("%d * %d = %d\n", d1, d2, result);
}