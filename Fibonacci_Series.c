#include<stdio.h>

int fibonacci(int);

int fibonacci(int n)
{
    if(n==1 || n==2)
    {
        return n-1;
    }
    else{
        return fibonacci(n-1)+fibonacci(n-2);
    }
}

int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    printf("The %d term of Fibonacci Series is %d",n,fibonacci(n));
}