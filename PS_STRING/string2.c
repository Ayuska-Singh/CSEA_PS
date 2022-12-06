#include<stdio.h>
int length(char str[])
{
    int i=0;
    int l=0;
    while(str[i]!='\0')
    {
        i++;
        l++;
    }
    return l;
}
void reverse(char str1[])
{
    int i=0;
    int l;
    l=length(str1);
    char str2[l];
    while(str1[i]!='\0')
    {
        l--;
        str2[l]=str1[i];
        i++;
    }
    printf("REVERSE OF THE STRING IS\n");
    puts(str2);
}
int main()
{
    char str1[100];
    int l;
    printf("ENTER THE STRING TO BE REVERSED\n");
    fflush(stdin);
    gets(str1);
    reverse(str1);
}