#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

// All structure to represents a stack 
struct Stack
{
    int top ;
    unsigned capacity ;
    int* array ;
};

// Function to create a stack of given capacity. It initialize size of stack as 0
struct Stack* createStack(unsigned capacity)
{
    struct Stack* stack=(struct Stack*)malloc(sizeof(struct Stack));
    stack->capacity = capacity;
    stack->top = -1 ;
    stack -> array = (int*)malloc(stack->capacity*sizeof(int)) ;
    return stack ; 
}

// Check whether stack is full or not
// Stack is full when top is equal to the last index
int isFull(struct Stack* stack)
{
    return stack->top == stack->capacity-1 ;
}

// Check whether stack is empty or not
// Stack is empty when top is equal to -1
int isEmpty(struct Stack* stack)
{
    return stack->top == -1 ;
}

// Function to add an item to stack,it increase top by 1
void push(struct Stack* stack,int item)
{
    if(isFull(stack))
    {
        return ;
    }
    stack -> array[++stack->top] = item ;
    printf("%d pushed to stack \n",item);
}

// Function to remove item from stack 
int pop(struct Stack* stack)
{
    if(isEmpty(stack))
    {
        return INT_MIN;
        return stack->array[stack->top--];
    }
}

// Function to return the top from stack without removing it 
int peek(struct Stack* stack)
{
    if(isEmpty(stack))
    {
        return INT_MIN;
    }
    return stack->array[stack->top] ;
}

// Driver program to test the above function 
int main()
{
    struct Stack* stack = createStack(100);
    push(stack,10);
    push(stack,20);
    push(stack,30);

    printf("%d popped from the stack \n",pop(stack));
    return 0;
}


