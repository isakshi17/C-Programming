#include<stdio.h>
int main()
{
    int radius;
    int height;
    printf("Please enter the radius of circle and cylinder\n");
    scanf("%d",&radius);
    
    printf("Please enter the height of the cylinder\n");
    scanf("%d",&height);
 
    float area = (3.14*radius*radius);
    float volume = (3.14*radius*height);


    printf("The area of circle is %f",area);
    printf("\nThe volume of cylinder is %f",volume);

}