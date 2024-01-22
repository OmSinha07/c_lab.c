#include<stdio.h>
#include<stdlib.h>
void tranverse()
{
struct node{
    int data;
    struct node* link;
};
struct node *start=NULL;
struct node *create(struct node*)
{
    struct node *new_node;
    int x;
    printf("enter -1 to exit");
    printf("enter data");
    scanf("%d");
    while(x!=-1)
struct node *head =malloc(sizeof(struct node));
new_node->data=x;
if(start==NULL)
{
    start=new_node;
    new_node->next=null;
}
else{
    new_node->next=NULL;
}
else{
    new_node->next=start;
    start=new_node;
    }
    printf("ebetr data");
    scanf("%d",&x);
}

