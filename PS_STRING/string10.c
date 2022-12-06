#include<stdio.h>
void freq(char str[])
{
    int i=0,j=0;
    char c;
    printf("CHARACTER BY CHARACTER FREQ COUNT\n");
    printf("ENTER THE CHARACTER IN LOWER CASE FOR ITS FREQUENCY IN GIVEN STRING\n");
    scanf("%c",&c);
    while(str[i]!='\0')
    {
        if(str[i]==c)
        {
            j++;
        }
        i++;
    }    
    printf("%d",j);
}
int main()
{
    char str[50];
    printf("ENTER THE STRING\n");
    fflush(stdin);
    gets(str);
    freq(str);
}