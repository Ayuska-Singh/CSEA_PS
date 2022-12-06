#include<stdio.h>
int main()
{
    char sen[100];
    int count=0;
    int i=0;
    printf("ENTER THE SENTENCE\n");
    fflush(stdin);
    gets(sen);
    while(sen[i]!='\0')
    {
        if((sen[i]==' ')&&(sen[i+1]!=' '))
        {
            count++;
        }
        i++;
    }
    printf("WORD COUNT IN A GIVEN SENTENCE IS %d ",count+1);
}
