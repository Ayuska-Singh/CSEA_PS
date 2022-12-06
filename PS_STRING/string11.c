#include<stdio.h>
void whitespace(char str[])
{
    char s1[50];
    int i=0,j=0;
    while(str[i]!='\0')
    {
        if(str[i]==' ')
        {
            i++;
            continue;
        }
        else
        {
            s1[j]=str[i];
            j++;
            i++;
        }
    }
    printf("STRING WITHOUT ANY WHITE SPACES\n");
    puts(s1);
}
int main()
{
    char str[50];
    printf("ENTER THE STRING\n");
    fflush(stdin);
    gets(str);
    whitespace(str);
}