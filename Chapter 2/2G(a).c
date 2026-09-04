//input 5 digit number and find the sum of its digitd
#include<stdio.h>
int findSum(int n){
  int d1,d2,d3,d4,d5;
  d1=n%10;
  n=n/10;
  d2=n%10;
  n=n/10;
  d3=n%10;
  n=n/10;
  d4=n%10;
  n=n/10;
  d5=n;
  return d1+d2+d3+d4+d5;
  
}
int main()
{
  int n,sum;
  printf("enter the number:");
  scanf("%d",&n);
  sum=findSum(n);
  printf("%d",sum);
  return 0;
}
