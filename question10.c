#include<stdio.h>
#include<string.h>
void revString(char *str)
{
    for(int i=0;i<strlen(str)/2;i++)
    {
        char temp;
        temp=str[i];
        str[i]=str[strlen(str)-i-1];
        str[strlen(str)-i-1]=temp;
    }
}
int main()
{
    char string[]="hello there";
    revString(string);
    printf("%s",string);
    return 0;
}