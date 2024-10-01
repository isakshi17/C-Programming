#include<stdio.h>

int main()
{
     int n;
    int res;
    printf("Enter the number whose table you want to print\n");
    scanf("%d",&n);//address of n , copy the value to this address

    for (int i=10;i>=1;i--)
    {
      res = n*i; 
      printf("%d X %d = %d \n",n,i,res);
    }
    return 0;

}