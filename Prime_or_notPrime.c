#include<stdio.h>
int main()
{
    int n;
    int not_prime = 0; // if not_prime == 1 set, then number is not prime else prime
    printf("Enter the number\n");
    scanf("%d",&n);

    if (n == 0 || n == 1)
    {
        not_prime = 1; // 0 and 1 are not prime numbers

    }else
    {
    for (int div = 2 ; div<n ; div++)
    {
         if(n%div == 0 && n!=2)
         {
            not_prime = 1;
            break;
         }
        
    }
    }
    if(not_prime)
    {
        printf("The number is not prime");
    }
    else
    {
        printf("The number is prime");
    }

}