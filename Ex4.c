//reads radius of circle and prints circle's diameter, circumference and area

#include<stdio.h>
#define PI 3.1416

int main()
{
    float r,diameter,circumference,area;

    printf("Enter the radius of a circle: ");
    scanf("%f",&r);

    diameter=2*r;
    circumference=2*PI*r;
    area=PI*r*r;

    printf("The diameter is %.2f\n",diameter);
    printf("The circumference is %.2f\n",circumference);
    printf("The area is %.2f\n",area);

    return 0;
}
