#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <string.h>

COORD coord = {0, 0};

void setup(int x, int y)
{
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
struct emp
{
    char name[40];
    int age;
    int gender;
};
int main()
{
    FILE *fp, *ft;
    struct emp e;
    char employname[40];
    char choice, choice1;
    long int recsize;
    fp = fopen("EMPLOY.DATA", "rb+");
    if (fp == NULL)
    {
        fp = fopen("EMPLOY.DATA", "wb+");
        if (fp == NULL)
        {
            printf("cannot open file ..\n");
            exit(1);
        }
    }
    recsize = sizeof(e);
    int count = 0;
    char temp[50];
    char str[50][50];
    // char str[][50], temp[50];
    int i = 0, c, j;
    while (1)
    {
        system("cls");
        setup(30, 01);
        printf("1. Add record ");
        setup(30, 03);
        printf("2. List record ");
        setup(30, 05);
        printf("3. Modify record ");
        setup(30, 07);
        printf("4. Delete record ");
        setup(30, 9);
        printf("5. count");
        setup(30, 11);
        printf("6. ascending");
        setup(30, 13);
        printf("7. descending");
        setup(30, 15);
        printf("8. gender sorting");
        setup(30, 17);
        printf("9. Exit ");
        setup(30, 19);
        printf("Your choice: ");
        choice = getche();
        switch (choice)
        {
        case '1':
            system("cls");
            fseek(fp, 0, SEEK_END);

            choice1 = 'y';
            while (choice1 == 'y')
            {
                printf("\nEnter name: ");
                scanf("%s", e.name);
                printf("\nEnter Age: ");
                scanf("%d", &e.age);
                printf("\nEnter gender: ");
                scanf("%d", &e.gender);
                fwrite(&e, recsize, 1, fp);
                printf("\nAdd another record y/n");
                fflush(stdin);
                choice1 = getche();
                count++;
            }
            break;
        case '2':
            system("cls");
            rewind(fp);
            while (fread(&e, recsize, 1, fp) == 1)
            {
                printf("\n %s %d %d", e.name, e.age, e.gender);
            }
            getche();
            break;
        case '3':
            system("cls");
            choice1 = 'y';
            while (choice1 == 'y')
            {
                printf("Enter the employee name to modify: ");
                scanf("%s", employname);
                rewind(fp);
                while (fread(&e, recsize, 1, fp) == 1)
                {
                    if (strcmp(e.name, employname) == 0)
                    {
                        printf("\nEnter new name,age and gender: ");
                        scanf("%s%d%d", e.name, &e.age, &e.gender);
                        fseek(fp, -recsize, SEEK_CUR);
                        fwrite(&e, recsize, 1, fp);
                        break;
                    }
                }
                printf("\nModify another record(y/n)");
                fflush(stdin);
                choice1 = getche();
            }
            break;
        case '4':
            system("cls");
            choice1 = 'y';
            while (choice1 == 'y')
            {
                count--;
                printf("\n Enter name of employe to delete:");
                scanf("%s", employname);
                ft = fopen("TEMPRARY.DATA", "wb");
                rewind(fp);
                while (fread(&e, recsize, 1, fp) == 1)
                {
                    if (strcmp(e.name, employname) != 0)
                        fwrite(&e, recsize, 1, ft);
                }
                fclose(fp);
                fclose(ft);
                remove("EMPLOY.DATA");
                rename("TEMPRARY.DATA", "EMPLOY.DATA");
                fp = fopen("EMPLOY.DATA", "rb+");
                printf("Delete another record y/n");
                fflush(stdin);
                choice1 = getche();
            }
            break;
        case '5':
            system("cls");
            rewind(fp);

            printf("\n%d", count);
            getche();
            break;
        case '6':
            system("cls");
            rewind(fp);
            // int i=0;
            i = 0;
            while (fread(&e, recsize, 1, fp) == 1)
            {
                strcpy(str[i++], e.name);
            }
            c = i;

            for (i = 0; i < c - 1; ++i)
                for (j = i + 1; j < c; ++j)
                {
                    if (strcmp(str[i], str[j]) > 0)
                    {
                        strcpy(temp, str[i]);
                        strcpy(str[i], str[j]);
                        strcpy(str[j], temp);
                    }
                }
            for (i = 0; i < c; ++i)
            {
                puts(str[i]);
            }
            getche();
            break;
        case '7':
            system("cls");
            rewind(fp);
            i = 0;
            while (fread(&e, recsize, 1, fp) == 1)
            {
                strcpy(str[i++], e.name);
            }
            c = i;

            for (i = 0; i < c - 1; ++i)
                for (j = i + 1; j < c; ++j)
                {
                    if (strcmp(str[i], str[j]) < 0)
                    {
                        strcpy(temp, str[i]);
                        strcpy(str[i], str[j]);
                        strcpy(str[j], temp);
                    }
                }
            for (i = 0; i < c; ++i)
            {
                puts(str[i]);
            }
            getche();
            break;
        case '8':
            system("cls");
            rewind(fp);
            i = 0;
            int k = 0;
            char s[50][50];
            int cg = 0, cb = 0;
            char boy[50];
            strcpy(boy, "male");
            char girl[50];
            strcpy(girl, "female");
            while (fread(&e, recsize, 1, fp) == 1)
            {
                if (e.gender == 1)
                    strcpy(str[i++], e.name), cg++;
                else
                    strcpy(s[k++], e.name), cb++;
            }

            for (i = 0; i < cg; ++i)
            {
                puts(str[i]);
            }
            for (i = 0; i < cb; ++i)
            {
                puts(s[i]);
            }
            getche();
            break;
        case '9':
            fclose(fp);
            exit(0);
        default:
            break;
        }
    }
    return 0;
}