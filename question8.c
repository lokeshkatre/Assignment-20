#include<stdio.h>
#include<string.h>
void sum(int *a,int size)
{
    int Sum=0;
    for(int i=0;i<size;i++)
    {
        Sum=Sum+a[i];
    }
    printf("Sum of elements are %d",Sum);
}
int main()
{
    int size;
    int arr[]={2,4,5,3,6,45,4,34,43};
    size=9;
    sum(arr,size);
}