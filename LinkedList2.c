#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int Data;
    struct Node *Next;
};

// Create a method to traverse Linked List
void LinkedListTraversal(struct Node *ptr)
{
    while(ptr!=NULL)
    {
        printf("Element are %d\n",ptr->Data);
        ptr=ptr->Next;
    }
}

int main()
{
    // Creating Nodes Of Linked List
    struct Node*head;
    struct Node*Second;
    struct Node*Third;
    struct Node*Fourth;
    struct Node*Fifth;
    struct Node*Sixth;
    struct Node*Seventh;
    struct Node*Eithth;
    struct Node*Ninth;
    struct Node*Tenth;

    // Allocationg Memory in the heap for each node

    head=(struct Node*)malloc(sizeof(struct Node));

    Second=(struct Node*)malloc(sizeof(struct Node));
    
    Third=(struct Node*)malloc(sizeof(struct Node));
    
    Fourth=(struct Node*)malloc(sizeof(struct Node));
    
    Fifth=(struct Node*)malloc(sizeof(struct Node));
    
    Sixth=(struct Node*)malloc(sizeof(struct Node));
    
    Seventh=(struct Node*)malloc(sizeof(struct Node));
    
    Eithth=(struct Node*)malloc(sizeof(struct Node));
    
    Ninth=(struct Node*)malloc(sizeof(struct Node));
    
    Tenth=(struct Node*)malloc(sizeof(struct Node));

    // Link Firth Node with Second
    head->Data=10;
    head->Next=Second;

    // Link Second Node and Third Node 
    Second->Data=20;
    Second->Next=Third;

    // Link Third Node with Fourth Node
    Third->Data=30;
    Third->Next=Fourth;

    // Link Fourth Node With Fifth Node
    Fourth->Data=40;
    Fourth->Next=Fifth;

    // Link Fifth Node with Sixth Node
    Fifth->Data=50;
    Fifth->Next=Sixth;

    // Link Sixth Node With Seventh Node
    Sixth->Data=60;
    Sixth->Next=Seventh;

    // Link Seventh Node With Eithth Node 
    Seventh->Data=70;
    Seventh->Next=Eithth;

    // Link Eithth Node With Ninth Node
    Eithth->Data=80;
    Eithth->Next=Ninth;

    // Link Ninth Node With Tenth Node 
    Ninth->Data=90;
    Ninth->Next=Tenth;

    // Set the Address NULL at Tenth Node
    Tenth->Data=100;
    Tenth->Next=NULL;

    // Calling The Method LinkedListTraversal
    LinkedListTraversal(head);


    return 0;

}