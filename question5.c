#include<stdio.h>
int max(int *x,int *y)
{
    if(*x>*y)
    return *x;
    else if(*x<*y)
    return *y;
    else return *x;
}
int main()
{
    int n1=5,n2=6;
    printf("%d is maximum",max(&n1,&n2));
}