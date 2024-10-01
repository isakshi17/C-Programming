#include<stdio.h>

int factorial(int);

int factorial(int n)
{
    if(n==0 || n==1) // Base Condition;
    {
        return 1;
    }
    else{
        return factorial(n-1)*n;
    }
}

int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);

    int res = factorial(n);
    printf("The Factorial of %d is %d",n,res);
}

