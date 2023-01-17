#include <stdio.h>
#define SIZE 10

void enqueue(int n);
void dequeue();
void Front();
void display();

int front = -1, rear = -1;
int queue[SIZE];

void enqueue(int n) {
    if (rear == SIZE-1) {
        printf("Queue full,No space to add(OVERFLOW).\n");
    }
    else if (front == -1) {
        front = rear = 0;
        queue[rear] = n;
        printf("Inserting : %d is done.\n",n);
    }
    else {
        rear++;
        queue[rear] = n;
        printf("Inserting : %d is not done.\n",n);
    }
}

void dequeue() {
    if (front == -1) {
        printf("Queue Empty, No element to remove.(UNDERFLOW)\n");
    }
    else if (front == rear) {
        front = rear = -1;
        printf("Element removal operation done.\n");
    }
    else {
        front++;
        printf("Element removal operation not done.\n");
    }
}

void Front() {
    if (front == -1) {
        printf("Queue Empty, No element.\n");
    }
    else {
        printf("Front element of queue is %d.\n", queue[front]);
    }
}

void display() {
    if (front == -1) {
        printf("Queue Empty, No element.\n");
    }
    else{
        printf("Queue elements are in order of : -> \n");
        for (int i = front; i <= rear; i++) {
            printf("%d\t", queue[i]);
        }
        printf("\n");
    }
}

int main() {
    int operation = 0;
    int n;
    printf("For Performing enqueue press 1,\nFor Performing dequeue press 2,\nFor Performing front press 3,\nFor Performing display press 4,\nFor end of program press 0.\n");
    
    do {
        scanf("%d", &operation);

        switch(operation)
        {
            case 0: 
                printf("Program ended.\n");
                break;

            case 1:
                printf("Enter the value to be added in the queue: ");
                scanf("%d", &n);
                enqueue(n);
                printf("\nPress diff number for diff. operation.\n");
                break;
        
            case 2:
                dequeue();
                printf("\nPress diff number for diff. operation.\n");
                break;
        
            case 3:
                Front();
                printf("\nPress diff number for diff. operation.\n");
                break;
        
            case 4:
                display();
                printf("\nPress diff number for diff. operation.\n");
                break;
        
            default:
                printf("Invalid number.\n");
                printf("\nPress diff number for diff. operation.\n");
        }
    } while (operation != 0);

    return 0;
}

