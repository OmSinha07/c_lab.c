#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct node* create_newnode(struct node* start);
struct node* insert_pos(struct node* start);
void display(struct node *start);
struct node
{
    int data;
    struct node* next;
    struct node* prev;
};
struct node* start=NULL;
struct node* ptr;
int main()
{
    int t;
    printf("enter no of nodes");
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
   start=create_newnode(start);
    }
    display(start);
    start=insert_pos(start);
    display(start);
}
struct node* create_newnode(struct node* start)
{
struct node* ptr;
int n;
struct node* new_node=(struct node*)malloc(sizeof(struct node));
printf("enter node");
scanf("%d",&n);
new_node->data=n;
new_node->next=NULL;
if(start==NULL)
{
    start=ptr=new_node;
    new_node->prev=start;
}
else
{
    ptr->next =new_node;
    new_node->prev=ptr;
    ptr->next =new_node;
    ptr=new_node;
}
return start;
}
struct node* insert_pos(struct node* start)
{
    struct node* ptr;
    int n;
    ptr=start;
    struct node* new_node=(struct node*)malloc(sizeof(struct node));
    printf("enter node to be inserted");
    scanf("%d",&n);
    new_node->data=n;
    new_node->next=NULL;
    new_node->prev=NULL;
    if(start==NULL)
    {
        start=new_node;
        new_node->next=start;
        new_node->prev=start;
    }
    else{
        new_node->next=start;
        do
        {
            ptr=ptr->next;
        }while(ptr->next!=start);
        new_node->prev=ptr;
        start=new_node;
        }
        return start;
}
void display(struct node *start)
{
    struct node* ptr;
    ptr=start;
    if(start==NULL)
    {
        printf("underflow");
    }
    else
    {
          while (ptr->next != start)
        {
            printf("%d ", ptr->data);
            ptr = ptr->next;
        } 
        printf("%d",ptr->data);
    }
}
    
