#include<stdio.h>  
#include<stdlib.h>  
struct node   
{  
    int data;  
    struct node *next;   
};  
struct node *head;  
  
void beginsert ();   
void lastinsert ();  
void randominsert();  
void begin_delete();  
void last_delete();  
void random_delete();  
void display();  
void search();  
void main ()  
{  
    int choice =0;  
    while(choice != 9)   
    {  
        printf("\n\n*********Main Menu*********\n");  
        printf("\nChoose one option from the following list ...\n");  
        printf("\n===============================================\n");  
        printf("\n1.Insert in begining\n2.Insert at last\n3.Insert at any random location\n4.Delete from Beginning\n5.Delete from last\n6.Delete node after specified location\n7.Search for an element\n8.Show\n9.Exit\n");  
        printf("\nEnter your choice?\n");         
        scanf("\n%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            beginsert();      
            break;  
            case 2:  
            lastinsert();         
            break;  
            case 3:  
            randominsert();       
            break;  
            case 4:  
            begin_delete();       
            break;  
            case 5:  
            last_delete();        
            break;  
            case 6:  
            random_delete();          
            break;  
            case 7:  
            search();         
            break;  
            case 8:  
            display();        
            break;  
            case 9:  
            exit(0);  
            break;  
            default:  
            printf("Please enter valid choice..");  
        }  
    }  
}  
void beginsert()  
{  
    struct node *newnode;  
    int item;  
    newnode = (struct node *) malloc(sizeof(struct node));  
    if(newnode == NULL)  
    {  
        printf("\nOVERFLOW");  
    }  
    else  
    {  
        printf("\nEnter value\n");    
        scanf("%d",&item);    
        newnode->data = item;  
        newnode->next = head;  
        head = newnode;  
        printf("\nNode inserted");  
    }  
}

void lastinsert()  
{  
    struct node *newnode,*temp;  
    int item;     
    newnode = (struct node*)malloc(sizeof(struct node));      
    if(newnode == NULL)  
    {  
        printf("\nOVERFLOW");     
    }  
    else  
    {  
        printf("\nEnter value?\n");  
        scanf("%d",&item);  
        newnode->data = item;  
        if(head == NULL)  
        {  
            newnode -> next = NULL;  
            head = newnode;  
            printf("\nNode inserted");  
        }  
        else  
        {  
            temp = head;  
            while (temp -> next != NULL)  
            {  
                temp = temp -> next;  
            }  
            temp->next = newnode;  
            newnode->next = NULL;  
            printf("\nNode inserted");  
        }  
    }  
}  

void randominsert()  
{  
    int i=1,loc,item, count=1;   
    struct node *newnode, *temp;
	printf("\nEnter the location after which you want to insert ");  
    scanf("\n%d",&loc);   
    temp = head;  
    while (temp -> next != NULL)  
    {  
        temp = temp -> next;
		count++;  
    } 
	if(loc > count)  
    {  
        printf("\n Invalid Position... Please Enter Valid Position");  
    }  
    else  
    {  
    	newnode = (struct node *) malloc (sizeof(struct node));
        printf("\nEnter element value");  
        scanf("%d",&item);  
        newnode->data = item;   
        temp=head;  
        while(i<loc)  
        {  
            temp = temp->next;  
           // if(temp == NULL)  
            //{  
              //  printf("\ncan't insert\n");  
               // return;  
            //}
			i++;            
        }  
        newnode ->next = temp ->next;   
        temp ->next = newnode;   
        printf("\nNode inserted");  
    }  
}  
void begin_delete()  
{  
    struct node *temp;  
    if(head == NULL)  
    {  
        printf("\n List is empty \n");  
    }  
    else   
    {  
        temp = head;  
        head = temp->next;  
        free(temp);  
        printf("\n Node deleted from the begining ...\n");  
    }  
}  

void last_delete()  
{  
    struct node *temp,*prevnode;  
    if(head == NULL)  
    {  
        printf("\n List is empty");  
    }  
    else if(head -> next == NULL)  
    {  
        head = NULL;  
        free(head);  
        printf("\n Only node of the list deleted ...\n");  
    }       
    else  
    {  
        temp = head;   
        while(temp->next != NULL)  
        {  
            prevnode = temp;  
            temp = temp ->next;  
        }  
        prevnode->next = NULL;  
        free(temp);  
        printf("\n Deleted Node from the last ...\n");  
    }     
}  
void random_delete()  
{  
    struct node *temp,*nextnode;  
    int loc,i=1;    
    printf("\n Enter the location of the node after which you want to perform deletion \n");  
    scanf("%d",&loc);  
    temp=head;
	if (temp == NULL)
	{
		printf(" Underflow Can't Delete'");
		return;
	}
	else 
	{
		while (i<loc)
		{
			temp = temp -> next;
			i++;
		}
		nextnode = temp->next;
		temp->next = nextnode->next;
		free(nextnode);
	}  
    printf("\n Deleted node %d ",loc+1);  
}  
void search()  
{  
    struct node *temp;  
    int item,i=0,flag;  
    temp = head;   
    if(temp == NULL)  
    {  
        printf("\nEmpty List\n");  
    }  
    else  
    {   
        printf("\nEnter item which you want to search?\n");   
        scanf("%d",&item);  
        while (temp!=NULL)  
        {  
            if(temp->data == item)  
            {  
                printf("item found at location %d ",i+1);  
                flag=0;  
            }   
            else  
            {  
                flag=1;  
            }  
            i++;  
            temp = temp -> next;  
        }  
        if(flag==1)  
        {  
            printf("Item not found\n");  
        }  
    }     
          
}  
void display()  
{  
    struct node *temp;  
    temp = head;   
    if(temp == NULL)  
    {  
        printf("Nothing to print");  
    }  
    else  
    {  
        printf("\n printing values . . . . .\n");   
        while (temp != NULL)  
        {  
            printf("\n%d",temp->data);  
            temp = temp -> next;  
        }  
    }  
}     
              

