#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct node* ptr;
struct node* create_node(struct node*start);
void traverse(struct node* start);
int countnode(struct node* start);
struct node* insertbeg(struct node*start);
struct node* insertend(struct node*start);
struct node* insertpos (struct node*start);
struct node* deletebegin(struct node*start);
struct node* deleteend(struct node*start);
struct node* deletepos(struct node* start);
struct node
{
int data;
struct node* next;
struct node* prev;
};
struct node* start=NULL;
int main()
{
    int t;
    printf("enter size");
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
   start= create_node(start);
}
 traverse(start);
 start= insertbeg(start);
  traverse(start);
  countnode(start);
  start= insertend(start);
  traverse(start);
  start= insertpos(start);
  traverse(start);
  start=deletebegin(start);
   traverse(start);
   start=deleteend(start);
   traverse(start);
   start=deletepos(start);
   traverse(start);
}
struct node* create_node(struct node*start)
{
    struct node *temp;
   
struct node *new_node=(struct node*)malloc(sizeof (struct node));
printf("enter node ");
int n;
scanf("%d",&n);
new_node->data=n;
new_node->next=NULL;
new_node->prev=NULL;
if(start==NULL)
{
    start=temp=new_node;
}
else
{
 temp->next=new_node;  
 new_node->prev=temp;
temp=new_node;
}
return start;
}
struct node* insertbeg(struct node*start)
{
    
    printf("enter data of new node");
  struct node *new_node=(struct node*)malloc(sizeof (struct node));
  scanf("%d",&new_node->data);
  new_node->next=NULL;
     new_node->prev=NULL;
     if(start==NULL)
     {
        start=new_node;
     }
     else
     {
        start->prev=new_node;
        new_node->next=start;
        start=new_node;
     }
     return start;
}
struct node* insertend(struct node*start)
{
    struct node* ptr;
    ptr=start;
    printf("enter data of new node");
  struct node *new_node=(struct node*)malloc(sizeof (struct node));
  scanf("%d",&new_node->data);
  new_node->next=NULL;
     new_node->prev=NULL;
     if(start==NULL)
     {
        start=new_node;
     }
     else
     {
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=new_node;
        new_node->prev=ptr;
     }
     return start;
}
struct node* insertpos (struct node*start) 
{
    int i=1;
struct node* ptr;
    ptr=start;
    printf("enter data of new node");
  struct node *new_node=(struct node*)malloc(sizeof (struct node));
  scanf("%d",&new_node->data);
  new_node->next=NULL;
     new_node->prev=NULL;
     int pos;
     printf("enter position");
     scanf("%d",&pos);
     if(pos==0||start==NULL)
     printf("Invalid");
     else if(pos==(countnode)+1)
      printf("Invalid");
      else
    {
        while(i<pos)
        {
            ptr=ptr->next;
            i++;
        }
        (ptr->next)->prev=new_node;
        new_node->prev=ptr;
        new_node->next=ptr->next;
        ptr->next=new_node;
    }
    return start;
}
struct node* deletebegin(struct node*start)
{
struct node* ptr;
ptr=start;
start=ptr->next;
ptr->next->prev=NULL;
free(ptr);
return start;
}
struct node* deleteend(struct node*start)
{
struct node* ptr,*prev;
ptr=start;
while(ptr->next!=NULL)
{
    prev=ptr;
    ptr=ptr->next;
}
prev->next=NULL;
free(ptr);
return start;
}
struct node* deletepos(struct node* start)
{
    ptr=start;
  int pos,i=1;
     printf("enter position");
     scanf("%d",&pos);
     if(pos==0||start==NULL)
     printf("Invalid");
     else if(pos==(countnode)+1)
      printf("Invalid");
      else
    {
        while(i<pos)
        {
            ptr=ptr->next;
            i++;
        }
         (ptr->prev)->next=ptr->next;
        (ptr->next)->prev=ptr->prev;
        free(ptr);
}
return start;
}
int countnode (struct node *start)
{
    int c=0;
    struct node *ptr;
    ptr = start;
    while (ptr != NULL)
    {
        c++;
        ptr = ptr->next;
    }
    return c;
}
void traverse(struct node *start)
{
    struct node *ptr;
    ptr = start;
    while (ptr != NULL)
    {
        printf("%d", ptr->data);
        ptr = ptr->next;
    }
     printf("\n");
}