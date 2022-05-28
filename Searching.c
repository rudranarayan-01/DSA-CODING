#include<stdio.h>

int linearSearch(int arr[],int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==element)
        {
            return i;
        }
    }
    return -1;
}

int binarySearch(int arr2[],int size2,int element2)
{
    int low=0;
    int mid;
    int high=size2-1;

    // Keep searching until low<=high 
    while (low<=high)
    {
        mid=(low+high)/2;

        if (arr2[mid]==element2)
        {
            return mid;
        }

        if(arr2[mid]<=element2)
        {
            low=mid+1;
        }

        else 
        {
            high=mid-1;
        }

    }
    return -1;

}

int main()
{
    // Unsorted array for linear search 
   
    int arr[]={1,3,5,56,4,55,3,54,54,354,56,34};
    // Where int occupies 4 bytes so sizeof(int)=4 
    // And size of array is 48 sizeof(arr)=48
    int size=sizeof(arr)/sizeof(int);
    // printf("%d\n",size);
    // printf("%d\n",sizeof(arr));
    // printf("%d",sizeof(int));
    int element= 5;
    int a=linearSearch(arr,size,element);
    printf("This is a Linear Search...!\n");
    printf("The element %d is found at index %d\n\n",element,a);

   

    // Sorted array for binary search
    int arr2[]={1,3,4,5,7,9,11,13,16,19,33,67,89,111};
    int size2 = sizeof(arr2)/sizeof(int);
    int element2 = 111;
    int searchIndex=binarySearch(arr,size2,element2);
    printf("This is a binary Search...!\n");
    printf("The element %d is found at index %d\n\n",element2,searchIndex);

    return 0;
}