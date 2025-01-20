#include <stdio.h>
#include <stdlib.h>


struct Node
{
    int data;
    struct Node *next;
};


void LinkedListTraversal(struct Node* ptr)
{

    while( ptr != NULL)
    {
        printf("\ndata = %d",ptr->data);
        ptr = ptr->next;
    }

}

int main()
{

    struct Node *head = (struct Node *)calloc (1 , sizeof(struct Node));
    struct Node *second = (struct Node *)calloc (1 , sizeof(struct Node));
    struct Node *third = (struct Node *)calloc (1 , sizeof(struct Node));

    head->data = 7;
    head->next = second;

    second->data = 8;
    second->next = third;

    third->data = 9;
    third->next = NULL ;

    LinkedListTraversal(head);

    free(third);
    free(second);
    free(head);


    
    return 0;
}