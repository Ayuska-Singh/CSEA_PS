#include<stdio.h>
#include<string.h>
int main()
{
    char city[20][20];
    int n;
    int i,j;
    char t[20];
    printf("ENTER THE NUMEBR OF CITIES\n");
    scanf("%d",&n);
    printf("ENTER THE NAME OF CITIES\n");
    for(i=0;i<n;i++)
    {
        scanf("%s",city[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(strcmp(city[j],city[j+1])>0)
            { 
                strcpy(t,city[j]);
                strcpy(city[j],city[j+1]);
                strcpy(city[j+1],t);
            }
        }
    }
    printf("THE NAME OF CITIES IN DICTIONARY ORDER\n");
    for(i=0;i<n;i++)
    {
        printf("%s  ",city[i]);
    }
}