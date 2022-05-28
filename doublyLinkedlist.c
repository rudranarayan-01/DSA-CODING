#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};


// Traverse The Doubly Linkedlist
// void linkedlistTraversal(struct Node *ptr)
// {
//     while(ptr != NULL)
//     {
//         printf("Element : %d\n",ptr->data);
        
//         ptr=ptr->next;
        
        
//     }
    

// }


void linkedlistTraversal(struct Node *ptr)
{
    struct node *q=
    while(ptr != NULL)
    {
        printf("Element : %d\n",ptr->data);
        
        ptr=ptr->next;
        
        
    }
    

}


int main()
{
    // Creating Nodes Of doubly linkedlist
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Allocating memory for each node dinamically in the heap
    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    fourth=(struct Node*)malloc(sizeof(struct Node));

    // Linking each node With corresponding Nodes
    head->data=10;
    head->next=second;
    head->prev=NULL;

    second->data=20;
    second->next=third;
    second->prev=head;

    third->data=30;
    third->next=fourth;
    third->prev=second;

    fourth->data=40;
    fourth->next=NULL;
    fourth->prev=third;

    // Calling methods
    printf("This is a Doubly Linkedlist\n");
    linkedlistTraversal(head);

    return 0;

}