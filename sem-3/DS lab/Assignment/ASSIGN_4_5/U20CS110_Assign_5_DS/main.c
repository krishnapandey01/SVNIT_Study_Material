// Program to take an infix expression
// Convert it into a POSTFIX expression
// Convert it into a PREFIX expression

#include <stdio.h>
#define N 50

// functions
int precedence(char operator);
void postfix(char scan[], char post[], int n);
void prefix(char scan[], char pre[], int n);
void push(char stack[], int *top, char element);
void pop(char stack[], int *top);
int oper(char operator);
void reverse_exp(char arr[], int n);
void display(char array[], int n);

int main()
{
    char input[N];
    char check = ',';
    printf("Enter the infix expression: ");
    printf("(Press enter when done) \n");

    int i = 1;
    for (i = 1; i < N-1; i++)
    {
        scanf("%c", &check);
        if (check == 10) // check for enter key
        {
            break;
        }
        else
        {
            input[i] = check;
        }
    }
    input[0] = '(';
    input[i] = ')';
    i++;
    // we didn't use fgets to avoid input at input[0]
    // as we need '(' at input[0]

    // printing the INFIX expression
    printf("Your INFIX expression is: \n");
    display(input, i);

    char post[i];
    char pre[i-2]; // i-2 because '(' & ')' are removed

    // printing the POSTFIX expression
    printf("POSTFIX expression is : \n");
    postfix(input, post, i);
    display(post, i-2); // i-2 because '(' & ')' are removed

    // printing the PREFIX expression
    printf("PREFIX expression is : \n");
    prefix(input, pre, i);
    display(pre, i-2);  // i-2 because '(' & ')' are removed

    return 0;
}

// function to check precedence of an operator
// +, - == 1
// *, /, % == 2
// ^ == 3
int precedence(char operator)
{
    if (operator == '+' || operator == '-')
    {
        return 1;
    }
    else if (operator == '*' || operator == '/' || operator == '%')
    {
        return 2;
    }
    else if (operator == '^')
    {
        return 3;
    }
    else // unknown operator
    {
        return 0;
    }
}

// function to push an element in a given stack
void push(char stack[], int *top, char element)
{
    *top += 1;
    stack[*top] = element;
}

// function to pop an element from a given stack
void pop(char stack[], int *top)
{
    *top -= 1;
}

// function to display an array
void display(char array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", array[i]);
    }
    printf("\n\n");
}

// function to check if a given operator is an operator
int oper(char operator)
{
    if (operator == '+' || 
        operator == '-' || 
        operator == '*' || 
        operator == '/' || 
        operator == '%' || 
        operator == '^')
    {
        return 1;
    }
    
    else
    {
        return 0;
    }
}

// function exclusively to reverse an expression
// care is taken to replace '(' & ')' with each other
void reverse_exp(char arr[], int n)
{
    // loop to reverse the array
    for (int i = 0; i < (int)(n/2); i++)
    {
        char temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }

    // another loop to eplace '(' & ')' with each other
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == '(')
        {
            arr[i] = ')';
        }
        else if (arr[i] == ')')
        {
            arr[i] = '(';
        }
    }
}

// function to convert infix expression to POSTFIX expression
void postfix(char scan[], char post[], int n)
{
    char stack[n];

    int stack_top = -1; // top for stack for storing operators
    int post_top = -1;  // top for the postfix expression stack

    for (int i = 0; i < n; i++)
    {
        if (scan[i] == '(')
        {
            push(stack, &stack_top, scan[i]);
        }
        else if (oper(scan[i]) == 1)
        {
            if (oper(stack[stack_top]) == 1)
            {
                while (precedence(scan[i]) <= precedence(stack[stack_top]))
                {
                char temp = stack[stack_top];
                pop(stack, &stack_top);
                push(post, &post_top, temp);
                }
            }
            
            push(stack, &stack_top, scan[i]);
        }
        else if (scan[i] == ')')
        {
            while (stack[stack_top] != '(')
            {
                char temp = stack[stack_top];
                pop(stack, &stack_top);
                push(post, &post_top, temp);
            }
            pop(stack, &stack_top); // to pop '('
        }
        else // scan[i] = operand
        {
            push(post, &post_top, scan[i]);
        }
    }
}

// function to convert infix expression to PREFIX expression
// infix is reversed
// postfix algorithm is applied
// reversed again
void prefix(char scan[], char pre[], int n)
{
    reverse_exp(scan, n);
    postfix(scan, pre, n);
    reverse_exp(pre, n-2);
}