#include<stdio.h>
#include<stdbool.h>
void isValid(char str[])
{
    int i=1;
    if (!((str[0] >= 'a' && str[0] <= 'z')|| (str[0] >= 'A' && str[0] <= 'Z') || str[0] == '_')) 
        {
            printf("INVALID\n");
            return;
        }
     while(str[i]!='\0'){
        if (!((str[i] >= 'a' && str[i] <= 'z')
              || (str[i] >= 'A' && str[i] <= 'Z')
              || (str[i] >= '0' && str[i] <= '9')
              || str[i] == '_'))
            {
                printf("INVALID\n");
                return;
            }
            i++;
    }
     printf("VALID\n");
            return;
}

int main()
{
    char str[50];
    printf("ENTER THE VALID IDENTIFIER\n");
    fflush(stdin);
    gets(str);
    isValid(str);
}