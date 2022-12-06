#include<stdio.h>
#include<string.h>
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
    int l=0;
    printf("ENTER THE STRING\n");
    fflush(stdin);
    gets(str);
    l=length(str);
    printf("LENGTH OF THE STRING %d\n",l);
}