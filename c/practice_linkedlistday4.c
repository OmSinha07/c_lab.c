#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    struct node
    {
        int data;
        struct node *next;
    };
    struct node *head = NULL, *ptr;
    int n, c = 0;
    printf("enter no of nodes ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        struct node *new_node = (struct node *)malloc(sizeof(struct node));
        scanf("%d", &new_node->data);
        new_node->next = NULL;
        if (head == NULL)
        {
            head = ptr = new_node;
        }
        else
        {
            ptr->next = new_node;
            ptr = new_node;
        }
    }
    struct node2
    {
        int data;
        struct node *next;
    };
    printf("enter element to be inserted");
    int item;
    scanf("%d",item);
    struct node2* new_node=(struct node2*)malloc(sizeof(struct node2));
    new_node->data=item;
    new_node->next=NULL;
    if(head==NULL)
    {
        head= new_node;
    }
        else
        {
            ptr=head;
            while(ptr!=NULL);
            {
                ptr=ptr->next;
            }
            ptr->next=new_node;
        }
    ptr = head;
    while (ptr != NULL)
    {
        printf("%d->", ptr->data);
        ptr = ptr->next;
        c++;
    }
    printf("\nthe total no of nodes%d", c);
}