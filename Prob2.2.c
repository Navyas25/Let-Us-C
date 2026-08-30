//enter a 5 digit number and reverse its digits
#include<stdio.h>
#include<conio.h>
int main()
{
  int n,d1,d2,d3,d4,d5,rev;
  printf("enter the number:");
  scanf("%d",&n);
  d1=n%10;
  n=n/10;
  d2=n%10;
  n=n/10;
  d3=n%10;
  n=n/10;
  d4=n%10;
  n=n/10;
  d5=n;
  rev=(d1*10000)+(d2*1000)+(d3*100)+(d4*10)+d5;
  printf("%d",rev);
  return 0;
}
