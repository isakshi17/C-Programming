#include<stdio.h>
int main()
{
    int length;
    int breadth;

    printf("Please enter the length of the rectangle\n");
    scanf("%d",&length);
    printf("Please enter the breadth of the rectangle\n");
    scanf("%d",&breadth);

    int area = (length*breadth);

    printf("The area of rectangle is %d",area);

}