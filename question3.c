#include<stdio.h>
void sort(int *ptr,int size)
{
    for(int i=0;i<size;i++)
        for(int j=i;j<size;j++)
        if(ptr[i]>ptr[j])
        {
           int temp;
           temp=ptr[i];
           ptr[i]=ptr[j];
           ptr[j]=temp;
        }
}
int main()
{
    int size;
    int arr[]={3,5,2,5,7,4,6};
    size=7;
    sort(arr,size);
    for(int i=0;i<7;i++)
    {
        printf("%d ",arr[i]);
    }
    
}