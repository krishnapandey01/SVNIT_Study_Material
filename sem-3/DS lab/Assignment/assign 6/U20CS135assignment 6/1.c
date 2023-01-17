#include<stdio.h>
#include<stdlib.h>
 
struct Queue
{
    int size;
    int f;
    int r;
    int* arr;
};
 
 
int isEmpty(struct Queue *q){
    if(q->r==q->f){
        return 1;
    }
    return 0;
}
 
int isFull(struct Queue *q){
    if((q->r+1)%q->size == q->f){
        return 1;
    }
    return 0;
}
 
void enqueue(struct Queue *q, int val){
    if(isFull(q)){
        printf("This Queue is full");
    }
    else{
        q->r = (q->r +1)%q->size;
        q->arr[q->r] = val; 
        printf("Enqued element: %d\n", val);
    }
}
 
int dequeue(struct Queue *q){
    int a = -1;
    if(isEmpty(q)){
        printf("This Queue is empty");
    }
    else{
        q->f = (q->f +1)%q->size;
        a = q->arr[q->f]; 
    }
    return a;
}
 
int front(struct Queue *q)
{
    int a=q->f;
    return a;
} 
int rear(struct Queue *q)
{
    int a=q->r;
    return a;
} 
int main(){
    struct Queue q;
    q.size = 5;
    q.f = q.r = 0;
    q.arr = (int*) malloc(q.size*sizeof(int));
    
    // Enqueue few elements
    enqueue(&q, 12);
   
    printf("Dequeuing element %d\n", dequeue(&q));
    
 
    if(isEmpty(&q)){
        printf("Queue is empty\n");
    }
    if(isFull(&q)){
        printf("Queue is full\n");
    }
 
    return 0;
}
