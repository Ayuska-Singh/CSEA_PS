#include<stdio.h>
#include<string.h>
int main()
{
    int i=0,j;
    char str[100];
    printf("ENTER THE STRING\n");
    fflush(stdin);
    gets(str);
    printf("THE PREFIXES OF THE STRING ARE\n");
    while(str[i+1]!='\0')
    {
        j=0;
        while(j<=i)
        {
            printf("%c",str[j]);
            j++;
        }
        printf("\n");
        i++;
    }
}