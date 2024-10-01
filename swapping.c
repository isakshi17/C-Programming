#include<stdio.h>

int swap(int*,int*);

int swap(int*x,int*y)
{
    int temp=0;
    temp = *x;
    *x = *y;
    *y = temp;
    

}
int main()
{
    int a = 5;
    int b = 6;
    printf("Value after swapping \n",swap(&a,&b));
    printf("%d",a);
    printf("\n%d",b);
    return 0;
}
