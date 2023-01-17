#include<stdio.h>
#include "h2.h"
#include "h3.h"
#include "h4.h"
int main()
{
    int n=17;
    decimal_to_unsigned_binary_U20CS135(n);
    
    binary_to_hexad_U20CS135(n);
    int a=35 ,b=5;
     int binSub =subtraction_unsigned_binary_numbers_Y20CSXYZ(a, b);
     printf("\n%d",binSub);
     int a1=-30, b1=-5;
    int binSub1 =subtraction_signed_binary_numbers_Y20CSXYZ(a1, b1);
     printf("\n%d",binSub1);
    return 0;
}

