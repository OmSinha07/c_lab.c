#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void inseertion(start);
struct node{
    int data;
    struct node* Link;
};
struct node* start=NULL;
struct node* create(struct node* start)
{
    struct node* new_node;
    int n;
    printf("enter -1 to exit");
    scanf("%d",&n);
    
    while(n!=-1)
    {
      new_node=(struct node*)malloc(sizeof(struct node));
        new_node->data=n;
     if(start==NULL)
     {
        start=new_node;
        new_node->Link=NULL;
        }
        else
        {
            new_node->Link=start;
            start=new_node;
        }
        printf("enter -1 to exit");
        scanf("%d",n);
    }
}
void traverse()
{
    struct node *ptr=start;
    while(ptr!=NULL)
    {
        printf("%d",ptr->data);
        ptr=ptr->Link;
    }
}
void insertion(start)
{
    struct node* ptr;
    if(start==NULL)
    start=new_node;
    else
    ptr=start;
    while(ptr->Link!=NULL)
{   ptr=ptr->Link;
    ptr->Link=new_node;
}
}