#include<stdio.h>
void isLeap(int yr)
{
  if((yr%4==0&&yr%100!=0)||yr%400==0)
    printf("leap year");
  else
    printf("not leap");
}
int main()
{
  int year;
  printf("enter the year:");
  scanf("%d",&year);
  isLeap(year);
  return 0;
}
