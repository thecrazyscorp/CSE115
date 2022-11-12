#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter n:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        sum+=i*i;
    }
    printf("Sum of the series:%d",sum);
    return 0;

    return 0;
}
