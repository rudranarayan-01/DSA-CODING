#include<stdio.h>
#include<stdlib.h>

struct myArray
{
    int total_size ;
    int used_Size ;
    int *ptr ;
};

void createArray(struct myArray * a, int tSize,int uSize)
{
    // (*a).total_size = tSize;
    // (*a).used_size = uSed;
    // (*a).ptr=(int*)malloc(tSize *sizeof(int));
    a->total_size = tSize;
    a->used_Size =uSize;
    a->ptr=(int*)malloc(tSize*sizeof(int));
}

void Show(struct myArray *a)
{

    for(int i=0;i<a->used_Size;i++)
    {
        printf("%d\n",(a->ptr)[i]);
    }
}

void setVal(struct myArray *a)
{
    int n;
    for(int i=0;i<a->used_Size;i++)
    {
        printf("Enter elements %d:",i);
        scanf("%d",&n);
        (a->ptr)[i]=n;
    }
}

int main()
{
    struct myArray marks;
    createArray(&marks,10,2);
    printf("We are running setval now\n");
    setVal(&marks);
    printf("We  are Running Show now\n");
    Show(&marks);

    return 0;
}