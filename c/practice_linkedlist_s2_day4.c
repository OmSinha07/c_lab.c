#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct node* ptr;
struct node* create_node(struct node*start);
struct node* insert_nodebeg(struct node*start);
void traverse(struct node* start);
struct node
{
int data;
struct node* next;
struct node* prev;
};
struct node* start=NULL;
int main()
{
    int T;
    printf("enter size of node");
    scanf("%d",&T);
    for(int i=0;i<T;i++)
    {
   start= create_node(start);
}
 traverse(start);

}
struct node* create_node(struct node* start)
{
    struct node* temp;
   
struct node *new_node=(struct node*)malloc(sizeof (struct node));
printf("enter node ");
int n;
scanf("%d",&n);
new_node->data=n;
new_node->next=NULL;
new_node->prev=NULL;
if(start==NULL)
{
    start= temp =new_node;
}
else
{
 temp->next=new_node;  
 new_node->prev=temp;
temp=new_node;
}
return start;
}
struct node* insert_nodebeg(struct node*start)
{
    struct node* new_node;
    
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
    start->prev=NULL;
    new_node->next=start;
    start=new_node;
   }
   return start;
}
void traverse(struct node *start)
{
    struct node *ptr;
    ptr = start;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
     printf("\n");
}