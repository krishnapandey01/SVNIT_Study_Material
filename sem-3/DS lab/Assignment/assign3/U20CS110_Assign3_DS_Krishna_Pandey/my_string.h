//my_string.h header file

//1
int str_length(char *str)
{
    int i, count = 0;
    for (i = 0; str[i] != '\0'; i++)
        count++;

    return count;
}

//2
void string_concatenation(char *str1, char *str2)
{
    int i, j, k = 0, count = 0;

    for (i = 0; str1[i] != '\0'; i++)
        count++;
    str1[count++] = ' ';

    for (j = 0; str2[j] != '\0'; j++)
    {
        str1[count] = str2[j];
        count++;
    }
    str1[count] = '\0';
    printf("\nyour string after concatenation is: %s\n", str1);
}

//3
void string_copy(char *str1, char *str2)
{
    int i;
    for (i = 0; str1[i] != '\0'; i++)
    {
        str1[i] = str2[i];
    }
    str1[i] = '\0';

    printf("\nAfter copying, string is: %s\n", str1);
}

//4
void compareStrings(char *x, char *y)
{
    int flag = 0;

    while (*x != '\0' || *y != '\0')
    {
        if (*x == *y)
        {
            x++;
            y++;
        }

        else if ((*x == '\0' && *y != '\0') || (*x != '\0' && *y == '\0') || *x != *y)
        {
            flag = 1;
            printf("Uequal Strings\n");
            break;
        }
    }

    if (flag == 0)
    {
        printf("Equal Strings\n");
    }
}

//5
void check_for_c(char *str1)
{
    int i, count = 0;
    for (i = 0; str1[i] != '\0'; i++)
    {
        if (str1[i] == 'C' || str1[i] == 'c')
        {
            count++;
            break;
        }
    }
    if (count == 0)
    {
        printf("\n Sorry!! We haven't found the 'c' Character\n");
    }
    else
    {
        printf("The First Occurrence of the 'c' character is at Position %d \n", i + 1);
    }
}

//6
void search_substring(char *str, char *sub_string)
{
    int count1 = 0, count2 = 0, i, j, flag;

    while (str[count1] != '\0')
        count1++;
    while (sub_string[count2] != '\0')
        count2++;
    for (i = 0; i <= count1 - count2; i++)
    {
        for (j = i; j < i + count2; j++)
        {
            flag = 1;
            if (str[j] != sub_string[j - i])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            break;
    }
    if (flag == 1)
        printf("SEARCH SUCCESSFUL!");
    else
        printf("SEARCH UNSUCCESSFUL!");
}

//7
void reverse_string(char *str)
{
    int i, count = 0, j;

    for (i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    printf("reversed string is: ");
    for (j = (count - 1); j >= 0; j--)
    {
        printf("%c", str[j]);
    }
}

//8
void replace_vowel_conso(char *x)
{
    int i;

    for (i = 0; x[i] != '\0'; i++)
    {
        if (x[i] == 'a' || x[i] == 'e' || x[i] == 'i' || x[i] == 'o' || x[i] == 'u')
            printf("*");
        else if (x[i] == ' ')
            printf(" ");
        else
            printf("#");
    }
}