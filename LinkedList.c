#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void LinkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element : %d\n",ptr->data);
        ptr=ptr->next;
    }
}

int main()
{

    struct Node *head ;
    struct Node *second ;
    struct Node *third ;
    struct Node *fourth ;

    // Allocating memory for nodes in the linked list in the heap
    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    fourth=(struct Node*)malloc(sizeof(struct Node));

    // Link first and second Nodes 
    head->data=7;
    head->next=second;

    // Link second and third nodes
    second->data=11;
    second->next=third;

    // Link third and fourth nodes
    third->data=44;
    third->next=fourth;

    // Terminate the list at fourth node
    fourth->data=89;
    fourth->next=NULL;

    // Calling LinkedListTraversal() method 
    LinkedListTraversal(head);
    
    return 0;

}