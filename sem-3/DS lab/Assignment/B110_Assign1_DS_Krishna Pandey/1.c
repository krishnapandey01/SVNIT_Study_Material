#include <stdio.h>
#include <stdlib.h>

int main()
{
    int city1[5][365], city2[5][365], city3[5][365], city4[5][365], city5[5][365];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 365; j++)
        {
            city1[i][j] = 20 + rand() % 21;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 365; j++)
        {
            city2[i][j] = 20 + rand() % 21;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 365; j++)
        {
            city3[i][j] = 20 + rand() % 21;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 365; j++)
        {
            city4[i][j] = 20 + rand() % 21;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 365; j++)
        {
            city5[i][j] = 20 + rand() % 21;
        }
    }

    int sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0, sum5 = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 365; j++)
        {
            sum1 = sum1 + city1[i][j];
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 365; j++)
        {
            sum2 = sum2 + city2[i][j];
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 365; j++)
        {
            sum3 = sum3 + city3[i][j];
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 365; j++)
        {
            sum4 = sum4 + city4[i][j];
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 365; j++)
        {
            sum5 = sum5 + city5[i][j];
        }
    }

    float temp1, temp2, temp3, temp4, temp5;

    temp1 = sum1 / (365 * 5);

    printf("average temperature of city 1 = %0.2f\n", temp1);

    temp2 = sum2 / (365 * 5);

    printf("average temperature of city 2 = %0.2f\n", temp2);

    temp3 = sum3 / (365 * 5);

    printf("average temperature of city 3 = %0.2f\n", temp3);

    temp4 = sum4 / (365 * 5);

    printf("average temperature of city 4 = %0.2f\n", temp4);

    temp5 = sum5 / (365 * 5);

    printf("average temperature of city 5 = %0.2f\n", temp5);

    float avg_temp;

    avg_temp = (temp1 + temp2 + temp3 + temp4 + temp5) / 5;

    printf("average temperature of all 5 cities = %0.2f", avg_temp);

    return 0;
}
