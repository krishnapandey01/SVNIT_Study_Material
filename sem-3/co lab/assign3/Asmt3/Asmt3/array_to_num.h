// C header file to convert elements of an array to a number

int array_to_num(int array[])
{
    int num = 0;
    int mul = 1;
    for (int i = 10; i >= 0; i--)
    {
        num += (array[i] * mul);
        mul *= 10;
    }

    return num;
}