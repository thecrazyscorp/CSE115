//Write a program that reads in 3 numbers and prints their average

#include<stdio.h>

int main()
{
    float a,b,c;
    printf("Insert first number: ");
    scanf("%f",&a);

    printf("Insert first number: ");
    scanf("%f",&b);

    printf("Insert first number: ");
    scanf("%f",&c);

    printf("The average is:%.1f",(a+b+c)/3);


    return 0;
}
