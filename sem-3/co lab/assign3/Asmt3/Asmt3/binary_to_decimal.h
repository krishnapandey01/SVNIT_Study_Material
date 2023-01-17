int binary_to_decimal(long int b)
{
    int res = 0, mul = 1;

    while (b > 0)
    {
        res += mul * (b % 10);
        mul *= 2;
        b /= 10;
    }
    
    return res;
}