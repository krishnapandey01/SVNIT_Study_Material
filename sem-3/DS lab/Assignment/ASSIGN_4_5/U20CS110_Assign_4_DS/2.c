#include <stdio.h>
#include <stdlib.h>

struct Queue {
    int size;
    int front;
    int rear;
    int *Q;
};

void create(struct Queue *q,int size) {
    q->size=size;
    q->front=q->rear=-1;
    q->Q=(int *)malloc(q->size*sizeof(int));
}

void enqueue(struct Queue *q,int x) {
    if(q->rear==q->size-1) {
        printf("Queue is Full");
    }    
    else {
        q->rear++;
        q->Q[q->rear]=x;
    }
}

int dequeue(struct Queue *q) {
    int x=-1;
    if(q->front==q->rear) {
        printf("Queue is Empty\n");
    }    
    else {
        q->front++;
        x=q->Q[q->front];
    }
    return x;
}

int front (struct Queue q) {
    int x=-1;
    if(q.front==q.rear) {
        printf("Queue is Empty\n");
    }    
    else {
        x=q.Q[q.front+1];
    }
    return x;
}
void Display(struct Queue q) {
    int i;
    for(i=q.front+1;i<=q.rear;i++)
    printf("%d ",q.Q[i]);
    printf("\n");
}

int main()
{
struct Queue q;
create(&q,5);
int choice,item;
    while(1) {
    printf("Enter 1 for Enqueue in queue.\nEnter 2 for Dequeue from queue.\nEnter 3 for front in queue.\nEnter 4 to Display queue.\nEnter 5 to exit.\n");
    scanf("%d",&choice);
    switch(choice)
                {
                 case 1 :
                        printf("\nEnter the item to be Enqueue : \n");
                        scanf("%d",&item);
                        enqueue(&q,item);
                        break;
                 case 2:
                        item = dequeue(&q);
                        printf("\nDequeued item is : %d\n",item );
                        break;
                 case 3:
                        printf("\nItem at the Front is : %d\n",front(q));
                        break;
                 case 4:
                        Display(q);
                        break;
                 case 5:
                        printf("\nProgramme is done.\n");
                        exit(1);
                 default:
                        printf("\nWrong choice\n");
                }
    }    
// enqueue(&q,10);
// enqueue(&q,20);
// enqueue(&q,30);
// Display(q);
// printf("%d ",dequeue(&q));
// printf("%d ",front(q));


return 0;
}