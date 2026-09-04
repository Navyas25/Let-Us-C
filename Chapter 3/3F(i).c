//Monday on 01/01/01, wap to find out day on 1st jan 2026
#include <stdio.h>
int leapYear(int year)
{
  if(year%400==0)
    return 1;
  else if(year%100==0)
    return 0;
  else if(year%4==0)
    return 1;
  else
    return 0;
}
void dayCalculator(int day,int month,int year)
{
  int sum=0,i,daysOfMonth[12]={31,28,31,30,31,30,31,31,30,31,30,31};
  for(i = 2001; i < year; i++)
    {
        if(leapYear(i) == 1)
            sum += 366;
        else
            sum += 365;
    }
  if(leapYear(year)&&month>2)
    sum++;
  for(i=0;i<month-1;i++)
    sum+=daysOfMonth[i];
  sum+=day-1;
  sum%=7;
  if(sum==0)
    printf("Monday");
  else if(sum==1)
    printf("Tuesday");
  else if(sum==2)
    printf("Wednesday");
  else if(sum==3)
    printf("Thursday");
  else if(sum==4)
    printf("Friday");
  else if(sum==5)
    printf("Saturday");
  else
    printf("Sunday");
    

}

int main()
{
    int d, m,y;
    printf("Enter date, month,year: ");
    scanf("%d %d %d",&d,&m,&y);
    dayCalculator(d,m,y);
    return 0;
}
//another method,zellrs formula
