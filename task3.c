/*Convert Celsius to Fahrenheit unit using the following formula. Take the value
of C as input from user and calculate the value of F.
F= C * (9/5) + 32*/

#include<stdio.h>
#include<math.h>

int main()
{
    float celcius,farenheit;
    printf("Enter the temperature in Celcius: ");
    scanf("%f",&celcius);

    farenheit=((celcius*9)/5)+32;

    printf("The temperature in Farenheit is: %.2f",farenheit);

    return 0;
}
