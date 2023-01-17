// Implementation of Circular Queue

#include <stdio.h>
#define SIZE 10

// Prototype functions
void Print();
void Enqueue(int input);
void Dequeue();
int Front();
int Rear();

// Queue essentials
int CQue[SIZE] = {0};
int front = -1;
int rear = -1;

// MAIN function
int main()
{
    int temp = 0;
    char pick = '1';
    printf ("e - enqueue/add\n"
            "d - dequeue/delete\n"
            "f - check element at front\n"
            "r - check element at rear\n"
            "p - print the list\n"
            "0 - Exit\n\n");

    while (pick != '0')
    {
        printf("\nPick a choice : ");
        scanf(" %c", &pick);

        switch(pick)
        {
            case 'e':
                printf("Enter the number to be added : ");
                scanf("%d", &temp);
                Enqueue(temp);
                break;

            case 'd':
                Dequeue();
                break;

            case 'f':
                temp = Front();
                if (temp == 'z') 
                {
                    break;
                }
                printf("%d is at the front.\n", temp);
                break;

            case 'r':
                temp = Rear();
                if (temp == 'z') 
                {
                    break;
                }
                printf("%d is at the rear.\n", temp);
                break;

            case 'p':
                printf("The queue is : \n");
                Print();
                printf("\n");
                break;

            case '0':
                printf("See ya :) \n");
                break;

            default :
                printf("Oops! Choice is unavailable!!\n");
                break;
        }
    }

    return 0;
}

// Print the queue
void Print()
{
    if (front == -1)
    {
        printf("Queue is Empty!!!\n");
        return;
    }

    int i = 0;
    int temp;
    do
    {
        temp = (SIZE + front + i) % SIZE;
        printf("%4d", CQue[temp]);
        i++;
    }while (temp != rear);
}

// Enqueue
void Enqueue(int input)
{
    if (front == -1) // rear == -1
    {
        front++;
        rear++;
        CQue[rear] = input;
        return;
    }

    // Queue is full
    if ((SIZE+rear+1)%SIZE == front)
    {
        printf("Queue is Full!!!\n");
        return;
    }

    rear = (SIZE+rear+1)%SIZE;
    CQue[rear] = input;
}

// Dequeue
void Dequeue()
{
    if (front == -1)
    {
        printf("Queue is Empty!!!\n");
        return;
    }

    if (front == rear)
    {
        front = -1;
        rear = -1;
        return;
    }

    front = (SIZE+front+1)%SIZE;
}

// Front
int Front()
{
    if (front == -1)
    {
        printf("Queue is Empty!!!\n");
        return 'z';
    }

    return CQue[front];
}

// Rear
int Rear()
{
    if (front == -1)
    {
        printf("Queue is Empty!!!\n");
        return 'z';
    }

    return CQue[rear];
}
