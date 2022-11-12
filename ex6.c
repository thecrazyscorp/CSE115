//C program to convert days to years weeks and days


#include<stdio.h>

int main()
{
    int day,week,year;
    printf("Enter days: ");
    scanf("%d",&day);

    year=day/365;
    week=(day%365)/7;
    day= day-((year*365)+(week*7));

    printf("%d years %d weeks %d days",year,week,day);




    return 0;
}
