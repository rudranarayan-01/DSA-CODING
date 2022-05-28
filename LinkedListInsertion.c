#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node * next;
};

// Traverse a LinkedList
void LinkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element :%d\n",ptr->data);
        ptr=ptr->next;
    }
}



// Case 1 : Insert at first Node
struct Node* insertAtFirst (struct Node *head , int data)
{
    struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
        ptr->data=data;
        ptr->next=head;

    return ptr;
}

// Case 2: Insert at Index 
struct Node* insertAtIndex(struct Node *head,int data,int index)
{
    struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
        struct Node *p = head;
        int i = 0;

        while(i!=index-1)
        {
            p = p->next;
            i++;
        }

    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;

    return head;
        
}

// Case 3: Insert at End Index
struct Node *insertAtEnd(struct Node *head,int data)
{
    struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
        
        ptr->data=data;
        struct Node *p=head;

    while(p->next != NULL)
    {
        p=p->next;
    }

    p->next=ptr;
    ptr->next=NULL;

    return head;
}

// Case 4: Insert after Node
struct Node *insertAfterNode(struct Node *head,struct Node *prevNode,int data)
{
    struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
        ptr->data=data;

        ptr->next=prevNode->next;
        prevNode->next=ptr;

        return head;
}


// Driver Code
int main()
{

    // Creating Nodes Of Linked List
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    struct Node *fifth;
    struct Node *sixth;
    struct Node *seventh;
    struct Node *eighth;


    // Allocating memory for nodes in the linked list in the heap
    head=(struct Node*)malloc(sizeof(struct Node));

    second=(struct Node*)malloc(sizeof(struct Node));
    
    third=(struct Node*)malloc(sizeof(struct Node));
    
    fourth=(struct Node*)malloc(sizeof(struct Node));
    
    fifth=(struct Node*)malloc(sizeof(struct Node));
    
    sixth=(struct Node*)malloc(sizeof(struct Node));
    
    seventh=(struct Node*)malloc(sizeof(struct Node));
    
    eighth=(struct Node*)malloc(sizeof(struct Node));


    // Link First(head) and Second Node
    head->data=10;
    head->next=second;

    // Link Second Node and Third Node  
    second->data=20;
    second->next=third;

    // Link Third Node and Fourth Node
    third->data=30;
    third->next=fourth;

    // Link Fourth Node With Fifth Node
    fourth->data=40;
    fourth->next=fifth;

    // Link Fifth Node With Sixth
    fifth->data=50;
    fifth->next=sixth;

    // Link Sixth Node With Seventh Node
    sixth->data=60;
    sixth->next=seventh;

    // Link Seventh Node with Eithth Node
    seventh->data=70;
    seventh->next=eighth;

    // Terminate Linked List With Eithth Node
    eighth->data=80;
    eighth->next= NULL;

    printf("Linked List Before Insertion :\n\n");
    LinkedListTraversal(head);

    // Calling Case:1
    // head=insertAtFirst(head,56);

    // calling case: 2
    // head=insertAtIndex(head,56,3);

    // Calling case: 3
    //head=insertAtEnd(head,45);

    // Calling case: 4
    // head=insertAfterNode(head,third,45);

    printf("\nLinked List after insertion:\n");
    LinkedListTraversal(head);

    return 0;

}