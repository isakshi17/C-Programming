#include<stdio.h>

float average(int,int,int);

float average(int n1,int n2,int n3)
{
    float avg ;
    avg = (n1+n2+n3)/3.0;
    
    return avg;
}

int main()
{
    int n1,n2,n3;
    printf("Enter three numbers\n");
    scanf("%d%d%d",&n1,&n2,&n3);

    float res = average(n1,n2,n3);
    printf("The avegrage of %d , %d , %d is %f",n1,n2,n3,res);
}