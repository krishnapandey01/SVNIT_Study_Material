// C header file to perform multiplication on binary numbers
// The multiplication is done by cumulative addition

#include "array_to_num.h"

long int multiplication_unsigned_binary_numbers_U20CS093(unsigned int b1, unsigned int b2)
{
    // Incase, any of the numbers is 0
    if (b1 == 0 || b2 == 0)
    {
        return 0;
    }

    // else

    // Define temporary variables and arrays to contain b1 & b2
    int arr1[11] = {0};
    int arr2[11] = {0};
    unsigned int temp1 = b1;
    unsigned int temp2 = b2;
    int sum[11] = {0};
    long int product = 0;

    // Fill the elements of b1 and b2 in arrays
    int i = 1;
    while (temp1 > 0)
    {
        arr1[11-i] = temp1 % 10;
        temp1 /= 10;
        i++;
    }
    int j = 1;
    while (temp2 > 0)
    {
        arr2[11-j] = temp2 % 10;
        temp2 /= 10;
        j++;
    }

    // Perform cumulative addition until b2 gets 0
    while (b2 > 0)
    {
        int carry = 0;
        for (int i = 0; i < 10; i++)
        {
            if (arr1[10-i] == 0)
            {
                if (carry == 0)
                {
                    if (sum[10-i] == 0)
                    {
                        sum[10-i] = 0;
                        carry = 0;
                    }
                    else // sum[10-i] == 1
                    {
                        sum[10-i] = 1;
                        carry = 0;
                    }
                }
                else // carry == 1
                {
                    if (sum[10-i] == 0)
                    {
                        sum[10-i] = 1;
                        carry = 0;
                    }
                    else // sum[10-i] == 1
                    {
                        sum[10 - i] = 0;
                        carry = 1;
                    }
                }
            }
            else // arr1[10-i] == 1
            {
                if (carry == 0)
                {
                    if (sum[10-i] == 0)
                    {
                        sum[10-i] = 1;
                        carry = 0;
                    }
                    else // sum[10-i] == 1
                    {
                        sum[10-i] = 0;
                        carry = 1;
                    }
                }
                else // carry == 1
                {
                    if (sum[10-i] == 0)
                    {
                        sum[10-i] = 0;
                        carry = 1;
                    }
                    else // sum[10-i] == 1
                    {
                        sum[10-i] = 1;
                        carry = 1;
                    }
                }
            }
        }

        // Subtract 1 from arr2
        if (arr2[10] == 1)
        {
            arr2[10] = 0;
        }
        else // arr2[10] == 0
        {
            int p = 1;
            arr2[10] = 1;

            while (arr2[10-p] != 1)
            {
                arr2[10-p] = 1;
                p++;
            }
            arr2[10-p] = 0;
        }

        // Place new value to b2
        b2 = array_to_num(arr2);
    }

    // Convert sum[] to number
    product = array_to_num(sum);

    // Return the quotient
    return product;
}