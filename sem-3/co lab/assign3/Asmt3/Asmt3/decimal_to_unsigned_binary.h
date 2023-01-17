// C header file to convert decimal numbers to unsigned binary

int decimal_to_unsigned_binary_U20CS093(int d)
{
    int mul = 1, res = 0;
    while (d > 0)
    {
        res += mul * (d % 2);
        mul *= 10;
        d /= 2;
    }
    return res;
}