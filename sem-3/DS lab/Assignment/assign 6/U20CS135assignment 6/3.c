#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
};

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

// Case 1
struct Node * insertAtFirst(struct Node *head, int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;

    ptr->next = head;
    return ptr; 
}

// Case 2
struct Node * insertAtIndex(struct Node *head, int data, int index){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    struct Node * p = head;
    int i = 0;

    while (i!=index-1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

// Case 3
struct Node * insertAtEnd(struct Node *head, int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node * p = head;

    while(p->next!=NULL){
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

//case 4
struct Node * deletAtFirst(struct Node *head){
    struct Node * p = head;
  
    head=head->next;
    free(p);
    return head; 
}
//case 5
struct Node * deletAtIndex(struct Node *head,int index){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    struct Node * p = head;
    int i = 0;

    while (i!=index-2)
    {
        p = p->next;
        i++;
    }
   
    ptr= p->next;
    p->next=ptr->next;
    free(ptr);
    return head;
}
// case 6
int searchelement(struct Node *ptr,int data)
{
    while (ptr!=NULL)
    {
        if(ptr->data==data)
        return 1;
        ptr = ptr->next;
        
    }
return 0;
}
int main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    
    head->data = 1;
    head->next = second;

    
    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = fourth;

   
    fourth->data = 4;
    fourth->next = NULL;

    printf("Linked list before insertion\n");
    linkedListTraversal(head);
    // head = insertAtFirst(head, 56);
    // head = insertAtIndex(head, 56, 1);
    // head = insertAtEnd(head, 56);
    // head = deletAtFirst(head);
    // head = insertAtIndex(head, 2);

    int search=searchelement(head,3);
    printf("\nLinked list after insertion\n");
    linkedListTraversal(head);

    
    return 0;
}