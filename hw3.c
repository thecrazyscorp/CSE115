#include<stdio.h>
#include<math.h>
#define pi 3.1416
int main()
{
    float height,diameter,r,v1,side,v2;
    printf("Enter height and diameter of cylinder: ");
    scanf("%f %f",&height,&diameter);
    r=diameter/2;
    v1=pi*r*r*height;
    printf("The volume of a cylinder is: %.2f\n",v1);
    printf("Enter side of a cube:");
    scanf("%f",&side);
    v2=pow(side,3);
    printf("The volume of a cube is: %.2f\n",v2);
    return 0;
}
