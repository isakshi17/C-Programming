#include<stdio.h>

float calc_force(float);

float calc_force(float m)
{
    float force = m*9.8;
    return force;
}

int main()
{
    float m = 45;
    printf("The mass of body is %f  and force exerted by it is %.2f N",m,calc_force(m));
}