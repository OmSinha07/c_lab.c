

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct node *create(struct node *start);
void traverse(struct node *start);
struct node
{
    int data;
    struct node *next;
};
struct node *start = NULL;
int main()
{
        int nd;
    printf("enter total nodes");
    scanf("%d", &nd);
        
    for (int i = 0; i < nd; i++)
    {
    start = create(start);
    }
    traverse(start);
}
struct node *create(struct node *start)
{
    struct node *ptr;
    int n;
   
  
       
  struct node *new_node=(struct node*)malloc(sizeof(struct node));
   printf("enter node");
   scanf("%d",&n);
        new_node->data = n;
         new_node->next= NULL;
        if (start == NULL)
        {
            start = ptr = new_node;
        }
        else
        {

            ptr->next = new_node;
            ptr = new_node;
        }
    
    return start;
}
void traverse(struct node *start)
{
    struct node *ptr;
    ptr = start;
    if (start == NULL)
    {
        printf("underflow");
    }
   
    else
    {
        do
        {
            printf("%d ",ptr->data);
            ptr=ptr->next;
        }while(ptr!=start);
    }
}
