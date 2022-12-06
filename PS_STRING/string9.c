#include<stdio.h>
int length(char str[100])
{
    int i=0;
    int l=0;
    while(str[i]!='\0')
    {
        i++;
    }
   return i;
}
int main()
{
    char str[100];
    int i,j,l;
    printf("ENTER THE STRING\n");
    fflush(stdin);
    gets(str);
    l=length(str);
    for(i=l-1;i>=0;i--)
    {
        for(j=i;j>l;j++)
        {
        printf("%c",str[j]);
        }
        printf("\n");
    }
}