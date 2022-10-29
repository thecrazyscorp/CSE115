/*Ask user for two integers a and b. Then swap (interchange) the values of a and
b. That means, a should get the value of b and b should get the value of a.*/

#include<stdio.h>

int main()
{
    float a,b,temp;

    printf("Enter a: ");
    scanf("%f",&a);

    printf("Enter b: ");
    scanf("%f",&b);

    temp=a;
    a=b;
    b=temp;

    printf("After swapping, a:%.2f and b:%.2f\n",a,b);


    return 0;

}
