#include<stdio.h>
int length(char *str)
{
    int len=0;
   for(int i=0;str[i];i++)
   len++;
   return len;
}
int main()
{
    char string[]="My name is Lokesh";
    printf("%d",length(string));
}