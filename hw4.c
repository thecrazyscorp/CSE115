#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter x and y: ");
    scanf("%d %d",&x,&y);
    printf("Quotient=%d\n",x/y);
    printf("Remainder=%d",x%y);

    return 0;
}
