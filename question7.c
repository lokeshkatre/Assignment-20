#include<stdio.h>
void f1(char *str)
{
    int vowels=0,consonants,alpha=0;
    for(int i=0;str[i];i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        vowels++;
        if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        vowels++;
        else if((str[i]>'a'&&str[i]<='z') || (str[i]>'A'&&str[i]<'Z'))
        alpha++;
    }
    consonants=alpha-vowels;
    printf("vowels-%d consonants-%d",vowels,consonants);
}
int main()
{
    char str[]="hello there any one here";
    f1(str);
}