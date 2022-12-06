#include<stdio.h>
int main()
{
    char str1[100];
    char str2[100];
    int i=0;
    printf("ENTER THE STRIG\n");
    fflush(stdin);
    gets(str1);
    while(str1[i]!='\0')
    {
       if (str1[i]>=65&&str1[i]<=90)
        {
            str2[i]=str1[i]+32;
        }
        else if(str1[i]>=97&&str1[i]<=122)
        {
            str2[i]=str1[i]-32;
        }
        else if(str1[i]==' ')
        {
            str2[i]=str1[i];
        }
        i++;
    }
    printf("NEW STRING\n");
    puts(str2);
}