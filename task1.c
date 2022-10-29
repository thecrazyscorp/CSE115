/*Write a program that asks the user to enter two numbers,
obtains the two numbers from the user and prints the sum,
product, difference, quotient and remainder of the two numbers.*/

#include<stdio.h>

int main()
{
    int a,b,sum,pro,diff,quo,rem;

    printf("Insert first number: ");
    scanf("%d",&a);

    printf("Insert second number: ");
    scanf("%d",&b);

    sum=a+b;
    pro=a*b;
    diff=a-b;
    quo=a/b;
    rem=a%b;

    printf("Sum=%d\n",sum);
    printf("Product=%d\n",pro);
    printf("Difference=%d\n",diff);
    printf("quotient=%d\n",quo);
    printf("remainder=%d\n",rem);


    return 0;
}
