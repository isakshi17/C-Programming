#include<stdio.h>

int main()
{
    int prod =1;
    int n;
    printf("enter the number \n");
    scanf("%d",&n);
    

    for(int i=1;i<=n;i++)
    {
        prod *= i;
    }
    printf("Factorial of %d is %d",n,prod);
}