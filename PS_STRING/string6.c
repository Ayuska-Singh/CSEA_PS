#include<stdio.h>
int main()
{
    int i=0;
    int c=0;
    char str1[100];
    char str2[100];
    printf("ENTER THE FIRST STRING\n");
    fflush(stdin);
    gets(str1);
    printf("ENTER THE SECOND STRING\n");
    fflush(stdin);
    gets(str2);
    while(str1[i]!='\0'&&str2[i]!='\0')
    {
        c=str1[i]-str2[i];
        if(c!=0)
        {
            printf("%d\n",c);
            printf("STRING IS DIFFERENT\n");
            break;
        }
        i++;
    }
    if(str1[i]=='\0'&&str2[i]=='\0')
    printf("STRINGS ARE SAME");
}