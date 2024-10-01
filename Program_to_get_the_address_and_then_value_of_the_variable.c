#include<stdio.h>

int main()
{
    int m = 6;
    int*n = &m;

    printf("\nm %d",m);// value of m
    printf("\nadress of m %p",&m);//address of m
    printf("\nvalue of m %d",*(&(m)));
    printf("\nadress of m %p",n); // value of n = adress of m
    printf("\nadress of n %p",&n);
    printf("\nvalu of m %u",*n);
    printf("\nValue of n %p",*&n);
    

}