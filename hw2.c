#include<stdio.h>
int main()
{
    double a,b,c,d,x1,x2,r,i;
    printf("Enter a,b,c: ");
    scanf("%lf %lf %lf",&a,&b,&c);
    d=(b*b)-(4*a*c);

    if(d>0){
    x1=(-b+sqrt(d))/(2*a);
    x2=(-b-sqrt(d))/(2*a);
    printf("x1=%.2lf\nx2=%.2lf \n",x1,x2);
    }
    else if(d==0)
    {
        x1=x2= -b/(2*a);
        printf("x1=x2=%.2lf",x1);
    }
    else
    {
        r=-b/(2*a);
        i= sqrt(-d)/(2*a);
        printf("x1=%.2lf+%.2lfi\nx2=%.2lf-%.2lfi",r,i,r,i);

    }
    return 0;
}
