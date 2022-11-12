#include<stdio.h>
int main()
{
    float c,f;
    printf("Enter temperature in Celcius: ");
    scanf("%f",&c);
    f=(9*c)/5;
    printf("Temperature in Farenheit: %f\n",f+32);
    return 0;
}
