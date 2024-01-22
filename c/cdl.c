#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct node* create_newnode(struct node* start);
struct node* insert_beg(struct node* start);
struct node* insert_end(struct node* start);
struct node* insert_pos(struct node* start);
struct node* delete_beg(struct node* start);
struct node* delete_end(struct node* start);
struct node* delete_pos(struct node* start);
int count_nodes(struct node *start);
    struct node* prev;
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
    start=insert_beg(start);
    display(start);
    start=insert_end(start);
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
    new_node->next=start;
    return start;
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
struct node* insert_beg(struct node* start)
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
        new_node->prev=start->prev;
        (start->prev)->next=new_node;
        start->prev=new_node;
        start=new_node;
        }
        return start;
}
struct node* insert_end(struct node* start)
{
    struct node* ptr;
    int n;
    ptr=start;
    struct node* new_node=(struct node*)malloc(sizeof(struct node));
    printf("enter node to be inserted");
    scanf("%d",&n);
    new_node->data=n;
    if(start==NULL)
    {
        start=new_node;
        new_node->next=start;
        new_node->prev=start;
        return start;
    }
    else
    {
     new_node->prev=start->prev;
     new_node->next=start;
     (new_node->prev)->next=new_node;
     (start->prev)->next=new_node;   
    return start;
    }
}
struct node* insert_pos(struct node* start)
{
    struct node* ptr,new_node;
    int pos,i=1,l;
    l= insert_pos(start);
    if(pos<1||pos>l)
{
    printf("invalid");
}
else if(pos==1)
{
  insert_beg(start);  
}
else
{
struct node* new_node=(struct node*)malloc(sizeof(struct node));
ptr=start;
while(i<pos-1)
{
    ptr=ptr->next;
    i++;
}
new_node->next=ptr;
new_node->prev=ptr->prev;
ptr->next->prev=new_node;
ptr->next=new_node;
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

    struct node* delete_beg(struct node* start)
    {
       struct node* ptr ;
       if(start==NULL)
       {
        printf("display");
       }
    else
    {
    ptr=start;
    (ptr->next)->prev=ptr->next;
    (ptr->prev)->next=ptr->prev;
    free(ptr);
    }
    return start;
    }
struct node* delete_end(struct node* start)
{
struct node* ptr ;
struct node* ptr1;
       if(start==NULL)
       {
        printf("display");
       }
       else if(start==start->next)
       {
        ptr=start;
    (ptr->next)->prev=ptr->next;
    (ptr->prev)->next=ptr->prev;
    free(ptr);
       }

       else
       {
        ptr=start;ptr1=start->prev;
        ptr->prev=ptr->prev->prev;
        ptr->prev->next=start;
        free(ptr);
         }
}
struct node* delete_pos(struct node* start)
{
    struct node* ptr ;
       if(start==NULL)
       {
        printf("display");
       }
    else if(start=)
    {
    ptr=start;
    (ptr->next)->prev=ptr->next;
    (ptr->prev)->next=ptr->prev;
    free(ptr);
    }
    return start;
    }
}
int count_nodes(struct node *start)
{
    struct node* ptr;int c=0;
    ptr=start;
    if(start==NULL)
    {
        printf("underflow");
    }
    else
    {
         do
        {
            c++;
            ptr = ptr->next;
        } while (ptr->next != start);
            return c;
    }
}
    
