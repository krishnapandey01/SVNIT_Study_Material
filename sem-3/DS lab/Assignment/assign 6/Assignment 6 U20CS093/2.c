// Conversion of array to linked list

#include <stdio.h>
#include <stdlib.h>

// a structure for linked list
struct Node 
{
    int data;
    struct Node *next;
};

// pointer to store address of head node
struct Node *head;

// defining functions
void arrayInput(int array[], int size);
void printArray(int array[], int size);
void Insert(struct Node **headRef, int DATA);
void Print();

// MAIN function
int main()
{
    int N; // size of array
    printf("Enter the size of the array: ");
    scanf("%d", &N);

    // define an array and take input
    int array[N];
    arrayInput(array, N);
    printf("\nYour array : \n");
    printArray(array, N);
    printf("\n\n");

    // create a linkedList
    head = NULL;

    for (int i = 0; i < N; i++)
    {
        Insert(&head, array[i]);
    }

    // printing the linkedList
    printf("The linked list of your array : \n");
    Print();

    return 0;
}

// function to take input into array
void arrayInput(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("array[%d] : ", i);
        scanf("%d", &array[i]);
    }
}

// function to print array
void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%4d", array[i]);
    }
}

// function to insert a node into linkedList
void Insert(struct Node **headRef, int DATA)
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

// function to print linkedList
void Print()
{
    struct Node *temp = head;

    while (temp != NULL)
    {
        printf("%4d", temp->data);
        temp = temp->next;
    }
    printf("\n");
}