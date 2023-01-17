// search left
// Program to create a linked list and perform operations
// 1) Insert in beginning
// 2) Insert at last
// 3) Insert at any random location
// 4) Delete from Beginning
// 5) Delete from last
// 6) Delete node after specified location
// 7) Search for an element
// 8) Exit

#include <stdio.h>
#include <stdlib.h>

// creating a structure for linked list nodes
struct Node
{
    int data;
    struct Node *next;
};

// prototype functions
int checkNatural(int num);
void Print(struct Node *HEAD);
void InsertBegin(struct Node **headRef, int DATA);
void InsertLast(struct Node **headRef, int DATA);
void Insert(struct Node **headRef, int position, int DATA);
void DeleteBegin(struct Node **headRef);
void DeleteLast(struct Node **headRef);
void Delete(struct Node **headRef, int position);
void Search(struct Node *HEAD, int DATA);

// MAIN function
int main()
{
    struct Node *head = NULL;

    char pick = 'i';

    // main menu
    while (pick != '0')
    {

        char k = 'a';
        int n = 0;
        int element = 0;

        printf("i - Insert an element\n");
        printf("d - Delete an element\n");
        printf("s - Search an element\n");
        printf("p - Print the list\n");
        printf("0 - EXIT\n");
        printf("\nEnter a character : ");
        scanf(" %c", &pick);

        switch (pick)
        {
        case 'i': // insert menu
            while (k != '1')
            {
                printf("\nb - insert at beginning\n");
                printf("l - insert at last\n");
                printf("n - insert at nth position\n");
                printf("1 - Exit Insertion\n");
                printf("p - Print the list\n");
                printf("0 - EXIT\n");
                printf("\nPick a character : ");
                scanf(" %c", &k);

                switch (k)
                {
                case 'b': // insert at beginning
                    printf("Enter the element to be inserted : ");
                    scanf("%d", &element);
                    InsertBegin(&head, element);
                    break;

                case 'l': // insert at last
                    printf("Enter the element to be inserted : ");
                    scanf("%d", &element);
                    InsertLast(&head, element);
                    break;

                case 'n': // insert at nth position
                    printf("Where to insert : ");
                    scanf("%d", &n);
                    if (checkNatural(n) == 1)
                    {
                        printf("Enter the element to be inserted : ");
                        scanf("%d", &element);
                        Insert(&head, n, element);
                    }
                    else
                        printf("A natural number was expected!!!\n\n");

                    break;

                case 'p':
                    printf("The list is : \n");
                    Print(head);
                    printf("\n\n");
                    break;

                case '1': // Exit Insertion
                    k = '1';
                    break;

                case '0': // EXIT
                    printf("\nSee ya! :)\n");
                    pick = '0';
                    k = '1';
                    break;

                default:
                    printf("Invalid character!!\n\n");
                    break;
                }
            }
            break;

        case 'd': // delete menu
            while (k != '1')
            {
                printf("\nb - delete beginning element\n");
                printf("l - delete last element\n");
                printf("n - delete nth element\n");
                printf("p - Print the list\n");
                printf("1 - Exit Deletion\n");
                printf("0 - EXIT\n");
                printf("\nPick a character : ");
                scanf(" %c", &k);

                switch (k)
                {
                case 'b' : // delete beginning element
                    DeleteBegin(&head);
                    break;

                case 'l' : // delete last element
                    DeleteLast(&head);
                    break;

                case 'n' : // delete nth element
                    printf("Which to delete : ");
                    scanf(" %d", &n);
                    if (checkNatural(n) == 1)
                        Delete(&head, n);

                    else
                        printf("A natural number was expected!!!\n\n");

                    break;

                case 'p':
                    printf("The list is : \n");
                    Print(head);
                    printf("\n\n");
                    break;

                case '1' : // Exit Deletion
                    k = '1';
                    break;

                case '0' : // EXIT
                    printf("\nSee ya! :)\n");
                    pick = '0';
                    k = '1';
                    break;

                default:
                    printf("Invalid character!!\n\n");
                    break;
                }
            }
            break;
        case 's': // search menu
            while (k != '1')
            {
                printf("\ns - to search\n");
                printf("1 - Exit Search\n");
                printf("0 - EXIT\n");
                printf("\nPick a character : ");
                scanf(" %c", &k);

                switch (k)
                {
                case 's' : // search
                    printf("Enter the element to be searched : ");
                    scanf(" %d", &element);

                    Search(head, element);
                    break;

                case '1' : // Exit Search
                    k = '1';
                    break;

                case '0' : // EXIT
                    printf("\nSee ya! :)\n");
                    pick = '0';
                    k = '1';
                    break;

                default:
                    printf("Invalid character!!\n\n");
                    break;
                }
            }
            break;

        case 'p':
            printf("The list is : \n");
            Print(head);
            printf("\n\n");
            break;

        case '0':
            printf("\nSee ya! :)\n");
            pick = '0';
            break;

        default:
            printf("Invalid character!!\n\n");
            break;
        }
    }

    return 0;
}

// function to check if a number is a natural number
int checkNatural(int num)
{
    if (num > 0)
        return 1;
    else
        return 0;
}

// function to print a linked list
void Print(struct Node *HEAD)
{
    struct Node *temp = HEAD;
    while (temp != NULL)
    {
        printf("%3d", temp->data);
        temp = temp->next;
    }
}

// function to insert at beginning
void InsertBegin(struct Node **headRef, int DATA)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = DATA;
    newNode->next = *headRef;

    *headRef = newNode;
}

// function to insert at last
void InsertLast(struct Node **headRef, int DATA)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = DATA;
    newNode->next = NULL;

    if (*headRef == NULL)
    {
        *headRef = newNode;
        return;
    }

    struct Node *temp = *headRef;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
}

// function to insert at nth position
void Insert(struct Node **headRef, int position, int DATA)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = DATA;

    if (position == 1)
    {
        newNode->next = *headRef;
        *headRef = newNode;
        return;
    }

    struct Node *temp = *headRef;
    for (int i = 0; i < position - 2; i++)
    {
        if (temp->next == NULL)
        {
            printf("List is smaller than %d\n\n", position);
            return;
        }
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

// function to delete beginning element
void DeleteBegin(struct Node **headRef)
{
    struct Node *temp = *headRef;
    if (temp == NULL)
    {
        printf("List is empty!!!\n");
        return;
    }

    *headRef = temp->next;
    free(temp);
}

// function to delete last element
void DeleteLast(struct Node **headRef)
{
    if (*headRef == NULL)
    {
        printf("List is empty!!!\n");
        return;
    }

    struct Node *temp = *headRef;
    if (temp->next == NULL)
    {
        *headRef = temp->next;
        free(temp);
        return;
    }

    struct Node *prev = *headRef;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
        prev->next = temp;
        prev = prev->next;
    }

    temp = temp->next;

    prev->next = NULL;
    free(temp);
}

// function to delete nth element
void Delete(struct Node **headRef, int position)
{
    if (*headRef == NULL)
    {
        printf("List is empty!!!\n");
        return;
    }

    struct Node *current = *headRef;
    if (position == 1)
    {
        *headRef = current->next;
        free(current);
        return;
    }

    struct Node *prev = *headRef;
    for (int i = 0; i < position-2; i++)
    {
        if (current->next->next == NULL)
        {
            printf("List is smaller than %d\n\n", position);
            return;
        }
        current = current->next;
    }

    prev = current;
    current = current->next;

    prev->next = current->next;
    free(current);
}

// function to search an element
void Search(struct Node *HEAD, int DATA)
{
    int t = -1;
    struct Node *temp = HEAD;

    int i = 0;
    while (temp != NULL)
    {
        if (temp->data == DATA)
            t = i;

        temp = temp->next;
        i++;
    }

    if (t == -1)
        printf("'%d' does NOT exist in the list.\n\n", DATA);

    else
        printf("'%d' exists at position '%d' in the list.\n\n", DATA, t+1);
}