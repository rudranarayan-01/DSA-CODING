#include<stdio.h>
#include<stdlib.h>

struct node
{
    struct node *next;
    int data;
};


// Linked List Traversal
void linkedlistTraversal(struct node *head)
{
    struct node *ptr =head ;

    do
    {
        printf("Elements is %d\n",ptr->data);
        ptr=ptr->next;
    }while(ptr != head);
}


struct node *insertAtFirst(struct node *head,int data)
{
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data=data;

    struct node *p= head->next;

    while(p->next != head)
    {
        p = p->next;
    }
    // Now p is at the last node of the circular linkedlist

    p->next=ptr;
    ptr->next=head;
    head=ptr;

    return head;
}


// Driver Code
int main()
{
    // Creating nodes of linked list
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    // Allocating memory dinamically in heap for each nodes 
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));

    // Linking  the corresponding nodes
    head->data=10;
    head->next=second;

    second->data=20;
    second->next=third;

    third->data=30;
    third->next=fourth;

    fourth->data=40;
    fourth->next=head;

    printf("Linkedlist before traversal.....!\n");
    linkedlistTraversal(head);

    head=insertAtFirst(head,100);
    head=insertAtFirst(head,200);

    printf("\nLinkedlist After Insertion....!\n");
    linkedlistTraversal(head);

    return 0;
}
