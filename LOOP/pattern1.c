#include<stdio.h>
int main()
{
    int i,j,k=1,l,n,m;
printf("enter the value of n ");
scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
        printf("%d ",k++);
        }
    printf("\n");
}
k=5;
   for(i=0;i<n;i++)
    {
        k=5;
        for(j=0;j<=i;j++)
        {
        printf("%d ",k--);
        }
    printf("\n");
}
for(i=0;i<n;i++)
{
    for(j=0;j<n-i-1;j++)
        printf(" ");
        int a=1;
    for(k=0;k<=i;k++)
    {
        printf("%d",a++);
    }
        printf("\n");
}
//7
for(i=0;i<n;i++)
{
    for(j=0;j<n-i-1;j++)
        printf(" ");
    for(k=i+1;k>0;k--)
    {
        printf("%d",k);
    }
       int a=2;
            for(l=0;l<i;l++)
                printf("%d",a++);
        printf("\n");
}
//8
for(i=0;i<n;i++)
{
    for(j=0;j<n-i-1;j++)
        printf(" ");
    for(k=i+1;k>0;k--)
    {
        printf("*");
    }
            for(l=0;l<i;l++)
                printf("*");
        printf("\n");
}
//6
/*int b=1;
for(i=0;i<n;i++)
{
    for(j=0;j<n-i-1;j++)
        printf(" ");
    for(k=i+1;k>0;k--)
    {
        printf("%d",b++);
    }
       int a=2;
            for(l=0;l<i;l++)
                printf("%d",a++);
        printf("\n");
}*/
//12
for(i=0;i<=n;i++)
{
    for(j=1;j<n+1-i;j++)
        printf("%d",j);
        for(m=i;m>0;m--)
    {
        printf(" ");
    }
     for(l=1;l<i;l++)
                printf(" ");
    if((i==0))
    {
        for(k=n-1;k>=1;k--)
            printf("%d",k);
    }
    else
    {
        for(k=n-i;k>=1;k--)
        printf("%d",k);
    }
    printf("\n");
}


//11
for(i=0;i<5;i++)
{
    for(j=1;j<=i+1;j++)
        printf("%d",j);
    for(k=8-(2*i);k>=1;k--)
        printf(" ");
    for(l=i+1;l>0;l--)
        printf("%d",l);
    printf("\n");

}
//10

}



