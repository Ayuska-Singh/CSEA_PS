#include<stdio.h>
int fact(int n)
{
    if(n==0||n==1)
    return 1;
    else
    return(n*fact(n-1));
}
int main()
{
    int n,i,j;
    int sum=0;
    printf("enter the value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       sum=sum+(fact(i))/i;
    }   
    printf(" the sum of first n terms of the following series: %d",sum);
}