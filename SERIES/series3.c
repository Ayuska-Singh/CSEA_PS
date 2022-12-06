#include<stdio.h>
#include<math.h>
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
    float sum=0.0;
    int x;
    printf("enter the value of n");
    scanf("%d",&n);
    printf("enter the value of x");
    scanf("%d",&x);
    for(i=0;i<=n;i++)
    {
       sum=sum+(float)((pow(x,i))/fact(i));
    }
    
    printf(" the sum of first n terms of the following series: %f",sum);
}