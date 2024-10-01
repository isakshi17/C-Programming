#include<stdio.h>

int main()
{
    int n;
    printf("enter the number\n");
    scanf("%d",&n);

    int sum = 0;
    int i = 0;
    while(i<=n)
    {
        sum+=i;
        i++;
    }
    printf("Sum of %d  natural number is %d",n,sum);
    
}