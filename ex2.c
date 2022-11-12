//C Program to compute squared root and cube of an input number

#include<stdio.h>
#include<math.h>
int main()
{
    float a;
    printf("Enter a number: ");
    scanf("%f",&a);

    printf("root-%.2f\ncube-%.2f",sqrt(a),pow(a,3));


    return 0;
}
