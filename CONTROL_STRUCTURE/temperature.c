#include<stdio.h>
int main()
{
    float temp;
    printf("enter the temperature in centigrade");
    scanf("%f",&temp);
    if(temp<0)
        printf("freezing whether");
    else if(0<temp&&temp<10)
        printf("very cold whether");
    else if(10<temp&&temp<20)
        printf("cold whether");
    else if(20<temp&&temp<30)
        printf("normal in temperature");
    else if(30<temp&&temp<40)
        printf("hot");
    else if(temp>=40)
        printf("very hot");
}
