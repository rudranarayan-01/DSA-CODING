#include<stdlib.h>
#include<stdio.h>

// Creating structure of node
struct node
{
    int data;
    struct node *next;
};

// Traverse a Linked lIst
void linkedlistTraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element:%d\n",ptr->data);
        ptr=ptr->next;
    }
}


// Case 1: Deleting the first element from the Linked list
struct node * deleteFirst(struct node *head)
{
    struct node *ptr = head;
    head=head->next;
    free(ptr);

    return head ;
}

// Case 2: Deleting the index at a given index from the linkedlist
struct node *deleteAtindex(struct node *head,int index)
{
    struct node *p=head;
    struct node *q=head->next;

    for (int i=0;i<index-1;i++){
        p=p->next;
        q=q->next;
    }

    p->next=q->next;
    free(q);

    return head;
}


// case 3: Deleting the last element of the Linked list 
struct node *deleteAtLast(struct node *head)
{
    struct node *p= head;
    struct node *q=head->next;

    while(q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }

    p->next=NULL;
    free(q);

    return head;
}


// Case 4: Deleting the element with a given value from the linked List
struct node *deleteAtValue(struct node *head,int value)
{
    struct node *p=head;
    struct node *q=head->next;

    while (q->data != value && q->next != NULL)
    {
        p=p->next;
        q=q->next;
    }
    if(q->data==value)
    {
        p->next=q->next;
        free(q);
    }

    return head;
}


// Driver Code
int main()
{
    // Creating Nodes Of Linkedlist
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;


    // Allocating memory for nodes in the Linkedlist in the heap
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));

    // Link First(head) and Second Node
    head->data=10;
    head->next=second;

    // Link Second Node and Third Node  
    second->data=20;
    second->next=third;

    // Link Third Node and Fourth Node
    third->data=30;
    third->next=fourth;

    // Terminating linkedlist at fourth node
    fourth->data=40;
    fourth->next=NULL;

    printf("Linkedlist Before Deletion Operation :\n");
    linkedlistTraversal(head);

    // calling case 1
    //head=deleteFirst(head);

    // Calling case 2
    //head=deleteAtindex(head,2);

    // Calling case 3
   // head=deleteAtLast(head);

    // Calling case 4
   // head=deleteAtValue(head,30);

    printf("Linkedlist After Deletion:\n");
    linkedlistTraversal(head);

}