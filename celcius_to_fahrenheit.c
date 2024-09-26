#include<stdio.h>
int main()
{
    int temp;
    printf("Enter the temperature in celcius");
    scanf("%d",&temp);
    float fahrenheit = (((9.0/5.0)*temp)+32);
    printf("The temperature in Fahrenheit is %f",fahrenheit);
    return 0;
}