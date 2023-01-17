#include <stdio.h>
#include <stdlib.h>

struct Stack {
    int size;
    int top;
    int *s;
};

void create(struct Stack *st){
    printf("Enter the Size of stack :- \n");
    scanf("%d",&st->size);
    st->top = -1;   
    st->s = (int *)malloc(st->size*sizeof(int));
}

void Display(struct Stack st) {
    int i;
    for(i=st.top;i>=0;i--){
        printf("%d ",st.s[i]);
    }
    printf("\n");
}

void push (struct Stack *st,int x){
    if(st->top==st->size-1){
        printf("Stack Overflow.\n");
    }
    else {
        st->top++;
        st->s[st->top]=x;
    }
}

int pop(struct Stack *st) {
    int x=-1;
    if(st->top==-1)
        printf("Stack Underflow.\n");
    else {
        x=st->s[st->top--];
    }
    return x;
}
int peekPos(struct Stack st,int pos) {
    int x=-1;
    if(st.top-pos+1<0) {
        printf("Invalid Index.\n");
    }
    x=st.s[st.top-pos+1];
    return x;
}
int peekIndex(struct Stack st,int index) {
    int x=-1;
    if(index<0) {
        printf("Invalid Index.\n");
    }
    x=st.s[index];
    return x;
}

int isEmpty(struct Stack st) {
    if(st.top == -1){
        return 1;
    }
    else return 0;
}

int isFull(struct Stack st) {
    if(st.top == st.size-1){
        return 1;
    }
    else return 0;
}

int stackTop(struct Stack st){
    if(!isEmpty(st)) 
    return st.s[st.top];
    return -1;
}

int main () {
    struct Stack st;
    create(&st);
    int choice,item,index;
    while(1) {
    printf("Enter 1 for Push in stack.\nEnter 2 for Pop from stack.\nEnter 3 for Peek(index) in stack.\nEnter 4 to Display Stack.\nEnter 5 to exit.\n");
    scanf("%d",&choice);
    switch(choice)
                {
                 case 1 :
                        printf("\nEnter the item to be pushed : \n");
                        scanf("%d",&item);
                        push(&st,item);
                        break;
                 case 2:
                        item = pop(&st);
                        printf("\nPopped item is : %d\n",item );
                        break;
                 case 3:
                        printf("Enter index to peek.\n");
                        scanf("%d",&index);
                        printf("\nItem at the %d index is : %d\n", index,peekIndex(st,index));
                        break;
                 case 4:
                        Display(st);
                        break;
                 case 5:
                        printf("\nProgramme is done.\n");
                        exit(1);
                 default:
                        
                        printf("\nWrong choice\n");
                }
    }            
    // push(&st,1);
    // push(&st,2);
    // push(&st,3);
    // push(&st,4);
    // printf("%d \n",peekIndex(st,2));
    // if(isFull(st)) {
    //     printf("Stack is Full.\n");
    // };
    // if(isEmpty(st)) {
    //     printf("Stack is Empty.\n");
    // };
    // Display(st);
    
return 0;
    
}