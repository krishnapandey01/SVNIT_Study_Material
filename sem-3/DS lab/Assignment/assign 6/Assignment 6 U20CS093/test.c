// LinkedList

#include <stdio.h>
#include <stdlib.h>

struct Node
    {
        int data;
        struct Node *next;
    };

void InsertBegin(struct Node **headRef, int DATA);
void Insert(struct Node **headRef, int position, int DATA);
void Print(struct Node *HEAD);
void DeleteBegin(struct Node **headRef);
void DeleteLast(struct Node **headRef);
void Delete(struct Node **headRef, int position);
void Search(struct Node *HEAD, int DATA);

int main()
{

    struct Node *head = NULL;

    int n, i , x, t;
    printf("How many numbers: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter a number : ");
        scanf("%d", &x);
        InsertBegin(&head, x);
        Print(head);
    }

    //DeleteLast(&head);
    Search(head, 4);

    return 0;
}

void InsertBegin(struct Node **headRef, int DATA)
{
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = DATA;
    newNode->next = *headRef;

    *headRef = newNode;
}

void Insert(struct Node **headRef, int position, int DATA)
{
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = DATA;

    if (position == 1)
    {
        newNode->next = *headRef;
        *headRef = newNode;
        return;
    }

    struct Node *temp = *headRef;
    for (int i = 0; i < position-2; i++)
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

void Print(struct Node *HEAD)
{
    struct Node *temp = HEAD;

    printf("The list is :\n");

    while (temp != NULL)
    {
        printf("%4d", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

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