#include<stdio.h>
#include<string.h>
void swap(char **x,char **y)
{
    char *temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{
    char *arr1="abcdef",*arr2="ABCDE";
    swap(&arr1,&arr2);
    printf("arr1=%s arr2=%s",arr1,arr2);
}