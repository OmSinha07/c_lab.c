// creating a node in c programing
// creating a linkedlist
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *head = NULL;
struct node *create(struct node*head)
{
    struct node *new_node;
    int n;
    printf("enter data");
    printf("%d", &n);
    while (n != -1)
    {
        new_node = (struct node *)malloc(sizeof(struct node));
        new_node->data = n;
        if (head == NULL)
        {
            head = new_node;
            new_node->link = NULL;
        }
        else
        {
            new_node->link = head;
            head = new_node;
        }
        printf("enter data");
        scanf("%d", &n);
    }
}
void traverse()
{
    struct node* ptr=head;
    while(ptr!=NULL)
    {
        printf("the data is%d",ptr->data);
    }
    ptr=ptr->link;
}
