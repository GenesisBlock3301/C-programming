#include <stdio.h>
#include <stdlib.h>
int partitions(int *arr , int start , int ends)
{
    int pivot = arr[ends];
    int pIndex = start,temp;
    for(int i = start ; i <= ends - 1 ; i++)
    {
        if(arr[i] <= pivot)
        {
            temp=arr[pIndex];
            arr[pIndex]=arr[i];
            arr[i]=temp;
            pIndex++;
        }
    }
    temp=arr[pIndex];
    arr[pIndex]=arr[ends];
    arr[ends]=temp;
    return pIndex;
}
void quicksort(int *arr , int start , int ends)
{
    if(start >= ends)
        return;
    int part = partitions(arr,start,ends);
    quicksort(arr,start,part-1);
    quicksort(arr,part+1,ends);
}
int main()
{
    int arr[100000];
    printf("Enter your array: \n");
    for(int i = 0 ; i < 5 ; i++)
    {
        scanf("%d",&arr[i]);
    }
    quicksort(arr,0,4);

    for(int i = 0 ; i < 5 ; i++)
   {
       printf("%d ",arr[i]);
    }
}
