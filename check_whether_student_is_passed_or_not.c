#include<stdio.h>
int main()
{
    int m1,m2,m3;

    printf("Enter the marks in subject 1\n");
    scanf("%d",&m1);
    
    printf("Enter the marks in subject 2\n");
    scanf("%d",&m2);
    
    printf("Enter the marks in subject 3 \n");
    scanf("%d",&m3);

    if(m1<33 || m2<33 || m3<33)
    {
        printf("You are FAIL because of less than 33%% marks in individual subject(s)");
    } else if ((m1+m2+m3)/3 < 40)
    {
        printf("You are FAIL because of less than 40%% marks in total");
    }
    else
    {

        printf("congratulation! You are passed!");
    }
return 0;

}