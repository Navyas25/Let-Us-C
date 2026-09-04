#include<stdio.h>
void leapYear(int yr)
{
    if(yr%100==0)
    {
        if(yr%400==0)
        printf("leap");
        else
        printf("not leap");
    }
    else{
       if(yr%4==0)
       printf("leap");
       else
       printf("not leap");
    }
}
int main()
{
    int year;
    printf("enter the year");
    scanf("%d",&year);
    leapYear(year);
    return 0;
}
