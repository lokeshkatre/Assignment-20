#include<stdio.h>
void revarr(int *arr,int size)
{
    for(int i=0;i<(size/2);i++)
    {
        int temp;
        temp=arr[i];
        arr[i]=arr[size-i-1];
        arr[size-i-1]=temp;
    }
}
int main()
{
    int size;
    int arr[]={1,2,3,4,5,6,7,8,9};
    size=9;
    revarr(arr,size);
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}