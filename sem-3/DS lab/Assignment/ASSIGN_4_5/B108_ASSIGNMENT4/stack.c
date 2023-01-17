#include <stdio.h>
#define SIZE 10

void push(int n); 
void pop();
void peek();
void isEmpty();
void display();
int top = -1;
int stack[SIZE];

void push(int n) {
    if (top == SIZE - 1) {
        printf("Stack Full, No Space.(OVERFLOW)\n");
    }
    else {
        top++;
        stack[top] = n;
        printf("Inserting : %d is done.\n", n);
    }
}

void pop() {
    if (top == -1) {
        printf("Stack Empty, No element to pop.(UNDERFLOW)\n");
    }
    else {
        top--;
        printf("Element pop operation done.\n");
    }
}

void peek() {
    if (top == -1) {
        printf("Stack Empty, No element to peek.\n");
    }
    else{
        printf("Top element of the stack is %d.\n", stack[top]);
    }
    
}

void isEmpty() {
    if (top == -1) {
        printf("Empty stack.\n");
    }
    else{
        printf("Non-Empty stack.\n");
    }
}

void display() {
    if (top == -1) {
        printf("Stack Empty, No element to display.\n");
    }
    else {
        printf("Stack elements are in order of : \n");
        for (int i = top; i > -1; i--) {
            printf("%d\n", stack[i]);
        }
    }
}


int main()
{
    int operation = 0; 
    int n;
    printf("For Performing push press 1,\nFor Performing pop press 2,\nFor Performing peek press 3,\nFor Performing isEmpty press 4,\n,For Performing display press 5,\nFor end of program press 0.\n");
    
    do
    {
        scanf("%d", &operation);

        switch(operation)
        {
            case 0: 
                printf("Program ended.\n");
                break;

            case 1:
                printf("Enter the value to be pushed in the stack: ");
                scanf("%d", &n);
                push(n);
                printf("Press diff number for different operation.\n");
                break;
        
            case 2:
                pop();
                printf("Press diff number for different operation.\n");
                break;
        
            case 3:
                peek();
                printf("Press diff number for different operation.\n");
                break;
        
            case 4:
                isEmpty();
                printf("Press diff number for different operation.\n");
                break;
        
            case 5:
                display();
                printf("Press diff number for different operation.\n");
                break;

            default:
                printf("Invalid operation.\n");
                printf("Press diff number for different operation.\n");
        }
    } while (operation != 0);
    return 0;
}
