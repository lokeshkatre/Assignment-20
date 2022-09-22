#include<stdio.h>
int main()
{
    int x=1,*a,**b,***c;
    a=&x;
    b=&a;
    c=&b;
    printf("%d %d %d %d\n",x,*a,**b,***c);
    printf("%d %d %d %d\n",&x,a,*b,**c);
    printf("%d %d %d\n",&a,b,*c);
    printf("%d %d\n",&b,c);
    return 0;
}