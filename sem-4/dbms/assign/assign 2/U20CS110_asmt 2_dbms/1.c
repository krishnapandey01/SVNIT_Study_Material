#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student_records
{
    char admission_number[10];
    char Fname[50], Lname[50], Gender[50];
} Sdata;
void add_data(FILE *append)
{
    int n, i;
    printf("Enter number of students you want to add the data:");
    scanf("%d", &n);
    append = fopen("Student Info.txt", "a");
    if (append == NULL)
    {
        printf("Error!\n");
        exit(1);
    }
    for (i = 0; i < n; i++)
    {
        printf("For Student %d\n", i + 1);
        printf("Enter Admission number: ");
        scanf("%s", &Sdata.admission_number);
        printf("Enter first name: ");
        scanf("%s", &Sdata.Fname);
        printf("Enter last name: ");
        scanf("%s", &Sdata.Lname);
        printf("Enter Gender:");
        scanf("%s", &Sdata.Gender);
        fprintf(append, "%s\n%s\n%s\n%s\n\n", Sdata.admission_number,
                Sdata.Fname, Sdata.Lname, Sdata.Gender);
    }
    fclose(append);
}
void delete_data(FILE *ddata)
{
    FILE *ft;
    char ad[10];
    ddata = fopen("Student Info.txt", "r");
    ft = fopen("Temp.txt", "w");
    printf("Enter the student's admission number you want to delete: ");
    scanf("%s", &ad);
    while (fscanf(ddata, "%s", &Sdata.admission_number) == 1)
    {
        fscanf(ddata, "\n%s\n%s\n%s\n\n", &Sdata.Fname, &Sdata.Lname,
               &Sdata.Gender);
        if (strcmp(Sdata.admission_number, ad))
        {
            fprintf(ft, "%s\n%s\n%s\n%s\n\n", Sdata.admission_number,
                    Sdata.Fname, Sdata.Lname, Sdata.Gender);
        }
    }
    fclose(ddata);
    fclose(ft);
    remove("Student Info.txt");
    rename("temp.txt", "Student Info.txt");
}
void Modify_data(FILE *Mdata)
{
    FILE *ft;
    char ad[10];
    Mdata = fopen("Student Info.txt", "r");
    ft = fopen("Temp.txt", "w");
    char na[10], nf[50], nl[50], ng[50];
    printf("Enter the student's admission number you want to Modify the data: ");
    scanf("%s", &ad);
    while (fscanf(Mdata, "%s", &Sdata.admission_number) == 1)
    {
        fscanf(Mdata, "\n%s\n%s\n%s\n\n", &Sdata.Fname, &Sdata.Lname,
               &Sdata.Gender);
        if (strcmp(Sdata.admission_number, ad))
        {
            fprintf(ft, "%s\n%s\n%s\n%s\n\n", Sdata.admission_number,
                    Sdata.Fname, Sdata.Lname, Sdata.Gender);
        }
        else
        {
            char ans;
            printf("You want to change admission number?(y/n)\n");
            scanf(" %c", &ans);
            if (ans == 'y')
            {
                printf("Enter new admission number: ");
                scanf(" %s", &na);
                strcpy(Sdata.admission_number, na);
            }
            printf("You want to change First name?(y/n)\n");
            scanf(" %c", &ans);
            if (ans == 'y')
            {
                printf("Enter new First name: ");
                scanf(" %s", &nf);
                strcpy(Sdata.Fname, nf);
            }
            printf("You want to change Last name?(y/n)\n");
            scanf(" %c", &ans);
            if (ans == 'y')
            {
                printf("Enter new Last name: ");
                scanf(" %s", &nl);
                strcpy(Sdata.Lname, nl);
            }
            printf("You want to change your Gender?(y/n)\n");
            scanf(" %c", &ans);
            if (ans == 'y')
            {
                printf("Enter your gender: ");
                scanf(" %s", &ng);
                strcpy(Sdata.Gender, ng);
            }
            printf("Your modification has been done succefully!\n");
            fprintf(ft, "%s\n%s\n%s\n%s\n\n", Sdata.admission_number,
                    Sdata.Fname, Sdata.Lname, Sdata.Gender);
        }
    }
    fclose(Mdata);
    fclose(ft);
    remove("Student Info.txt");
    rename("temp.txt", "Student Info.txt");
}
int display_no(FILE *display)
{
    int n;
    n = 0;
    char c, t;
    display = fopen("Student Info.txt", "r");
    c = getc(display);
    while (c != EOF)
    {
        if (c == '\n')
        {
            t = getc(display);
            if (t == '\n')
            {
                n++;
            }
        }
        c = getc(display);
    }
    fclose(display);
    return n;
}
int ascending(const void *a, const void *b)
{
    struct student_records *x = (struct student_records *)a;
    struct student_records *y = (struct student_records *)b;
    return strcmp(x->Fname, y->Fname);
}
void asfname(FILE *fname)
{
    fname = fopen("Student Info.txt", "r");
    struct student_records arr[100];
    FILE *ft;
    ft = fopen("Temp.txt", "w");
    int ns = display_no(fname);
    int t = ns;
    int i = 0;
    while (t--)
    {
        fscanf(fname, "%s\n%s\n%s\n%s\n\n",
               &arr[i].admission_number, &arr[i].Fname, &arr[i].Lname, &arr[i].Gender);
        i++;
    }
    qsort(arr, ns, sizeof(arr[0]), ascending);
    for (int i = 0; i < ns; i++)
    {
        fprintf(ft, "%s\n%s\n%s\n%s\n\n", arr[i].admission_number,
                arr[i].Fname, arr[i].Lname, arr[i].Gender);
    }
    fclose(fname);
    fclose(ft);
    remove("Student Info.txt");
    rename("temp.txt", "Student Info.txt");
}
int descending(const void *a, const void *b)
{
    struct student_records *x = (struct student_records *)a;
    struct student_records *y = (struct student_records *)b;
    return strcmp(x->Lname, y->Lname);
}
void aslname(FILE *lname)
{
    lname = fopen("Student Info.txt", "r");
    struct student_records arr[100];
    FILE *ft;
    ft = fopen("Temp.txt", "w");
    int ns = display_no(lname);
    int t = ns;
    int i = 0;
    while (t--)
    {
        fscanf(lname, "%s\n%s\n%s\n%s\n\n",
               &arr[i].admission_number, &arr[i].Fname, &arr[i].Lname, &arr[i].Gender);
        i++;
    }
    qsort(arr, ns, sizeof(arr[0]), descending);
    for (int i = 0; i < ns; i++)
    {
        fprintf(ft, "%s\n%s\n%s\n%s\n\n", arr[i].admission_number,
                arr[i].Fname, arr[i].Lname, arr[i].Gender);
    }
    fclose(lname);
    fclose(ft);
    remove("Student Info.txt");
    rename("temp.txt", "Student Info.txt");
}
void separate(FILE *bg)
{
    bg = fopen("Student Info.txt", "r");
    FILE *b, *g;
    b = fopen("Boys List.txt", "w");
    g = fopen("Girls List.txt", "w");
    struct student_records arr[100];
    int ns = display_no(bg);
    int t = ns;
    int i = 0;
    while (t--)
    {
        fscanf(bg, "%s\n%s\n%s\n%s\n\n",
               &arr[i].admission_number, &arr[i].Fname, &arr[i].Lname, &arr[i].Gender);
        if (!strcmp(arr[i].Gender, "Female"))
        {
            fprintf(g, "%s\n%s\n%s\n%s\n\n",
                    arr[i].admission_number, arr[i].Fname, arr[i].Lname, arr[i].Gender);
        }
        else
        {
            fprintf(b, "%s\n%s\n%s\n%s\n\n",
                    arr[i].admission_number, arr[i].Fname, arr[i].Lname, arr[i].Gender);
        }
        i++;
    }
    fclose(b);
    fclose(g);
    fclose(bg);
}
int main()
{
    FILE *fptr;
    int choice;
    printf("1.Add a record\n");
    printf("2.Delete a record\n");
    printf("3.Modify the record\n");
    printf("4.Display number of students\n");
    printf("5.Ascending order w.r.t Fname\n");
    printf("6.Descending order w.r.t Lname\n");
    printf("7.Separate list of Boys and Girls\n");
    printf("8.Exit\n");
    while (1)
    {
        printf("Enter the operation you want to perform:");
        scanf(" %d", &choice);
        switch (choice)
        {
        case 1:
        {
            add_data(fptr);
            break;
        }
        case 2:
        {
            delete_data(fptr);
            break;
        }
        case 3:
        {
            Modify_data(fptr);
            break;
        }
        case 4:
        {
            int n = display_no(fptr);
            printf("No. of datas are: %d\n", n);
            break;
        }
        case 5:
        {
            asfname(fptr);
            break;
        }
        case 6:
        {
            aslname(fptr);
            break;
        }
        case 7:
        {
            separate(fptr);
            break;
        }
        case 8:
        {
            exit(1);
            break;
        }
        default:
        {
            break;
        }
        }
    }
    return 0;
}
