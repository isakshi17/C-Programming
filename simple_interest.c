#include<stdio.h>
int main(){
    int p,r,t;
    printf("Enter the principal amount\n");
    scanf("%d",&p);

    printf("Enter the rate of interest\n");
    scanf("%d",&r);

    printf("Enter the period of time\n");
    scanf("%d",&t);

    float interest = (p*r*t)/100.0;

    printf("The Simple Interest for the amount %d is %f",p,interest);
}