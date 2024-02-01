#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next
};
void traversalLL(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Elements are: %d\n", ptr->data);
        ptr = ptr->next;
    }
}
int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));

    // start linking
    head->data = 7;
    head->next = second;

    second->data = 10;
    second->next = third;

    third->data = 12;
    third->next = NULL;
    traversalLL(head);
    return 0;
}