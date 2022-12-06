#include<stdio.h>
int main()
{
    char str1[100];
    char str2[100];
    char str3[100];
    int i=0,j=0;
    printf("ENTER THE FIRST STRING\n");
    fflush(stdin);
    gets(str1);
    printf("ENTER THE SECOND STRING\n");
    fflush(stdin);
    gets(str2);
    while(str1[i]!='\0')
    {
        str3[i]=str1[i];
        i++;
    }
    str3[i]=' ';
    i++;
    while(str2[j]!='\0')
    {
        str3[i]=str2[j];
        j++;
        i++;
    }
    printf("CONCATENATED STRING IS  \n");
    puts(str3);
}