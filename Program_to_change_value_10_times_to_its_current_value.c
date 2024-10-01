#include<stdio.h>

int ten_times(int*);

int ten_times(int* n) // adress of n1
{
     *n *= 10; // *n = *n * 10 => value at (address of n1) * 10
     return *n; // return value at n;
}
int main()
{
   int n1;
   printf("Enter the number\n");
   scanf("%d",&n1);

   int res = ten_times(&n1);
   printf("The result %d X 10 is %d",n1,res);
}