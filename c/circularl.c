#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct node *create(struct node *start);
struct node *csl_insertbeg(struct node *start);
struct node *csl_insertend(struct node *start);
void traverse(struct node *start);
struct node *delete_end(struct node *start);
struct node *delete_first(struct node *start);
struct node
{
    int data;
    struct node *next;
};
struct node *start = NULL;

int main()
{
    struct node *ptr;
    int nd;
    printf("enter total nodes");
    scanf("%d", &nd);

    for (int i = 0; i < nd; i++)
    {
        start = create(start);
    }
    traverse(start);
    start = csl_insertbeg(start);
    traverse(start);
    start = csl_insertend(start);
    traverse(start);
    start = delete_first(start);
    traverse(start);
    start = delete_end(start);
    traverse(start);
}

struct node *create(struct node *start)
{
    struct node *ptr;
    int n;

    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    printf("enter node");
    scanf("%d", &n);
    new_node->data = n;
    new_node->next = NULL;
    if (start == NULL)
    {
        start = ptr = new_node;
    }
    else
    {

        ptr->next = new_node;
        ptr = new_node;
    }
        ptr->next=start;

    return start;
}

// insert at beggning

struct node *csl_insertbeg(struct node *start)
{
    struct node *ptr;
    int item;
    struct node *new_node;
    printf("\n");
    printf("enter node to be inserted in the begning");
    scanf("%d", &item);
    new_node->data = item;
    if (start == NULL)
    {
        start = new_node;
        new_node->next = start;
    }
    else
    {
        ptr = start;
        while(ptr->next != start){
            ptr=ptr->next;
        }
        ptr->next = new_node;
        new_node->next = start;
         start = new_node;
    }
    return start;
}

// delete from first

struct node *delete_first(struct node *start)
{
    struct node *ptr;
    struct node *temp;
    if (start == NULL)
    {
        printf("underflow");
    }
    else if (start->next == start)
    {
        ptr = start;
        start = NULL;
        free(ptr);
    }
    else
    {
        ptr = start;
        if (ptr != start)
        {
            ptr = ptr->next;
        }
        ptr->next = start->next;
        temp = start;
        start = start->next;
        temp->next = NULL;
        free(temp);
    }
    return start;
}

// delete from last

struct node *delete_end(struct node *start)
{
    struct node *ptr;
    struct node *prev;
    if (start == NULL)
    {
        printf("underflow");
    }
    else if (start == start->next)
    {
        ptr = start;
        start = NULL;
        free(ptr);
    }
    else
    {
        ptr = start;
        while (ptr->next != start)
        {
            prev = ptr;
            ptr = ptr->next;
        }
        prev->next = start;
        free(ptr);
    }
}

// insert at the last

struct node *csl_insertend(struct node *start)
{
    struct node* ptr;
    struct node *new_node;
    int item;
    printf("enter node to be inserted at the end");
    scanf("%d", &item);
    if (start == NULL)
    {
        start = new_node;
        new_node->next = start;
    }
    else
    {
        ptr = start;
        if (ptr->next != start)
        {
            ptr = ptr->next;
        }
        ptr->next = new_node;
        new_node->next = start;
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
         while (ptr->next != start)
        {
            printf("%d ", ptr->data);
            ptr = ptr->next;
        } 
        printf("%d",ptr->data);
    }
}