//denominations=100,50,10,5,2,1=min no of denominations to get n
#include<stdio.h>
int main(){
  int n,d100,d50,d10,d5,d2,d1;
  printf("enter the amount:");
  scanf("%d",&n);
  d100=n/100;
  n=n%100;
  d50=n/50;
  n=n%50;
  d10=n/10;
  n=n%10;
  d5=n/5;
  n=n%5;
  d2=n/2;
  n=n%2;
  d1=n/1;
  printf("100:%d\n50:%d\n10:%d\n5:%d\n2:%d\n1:%d\n",d100,d50,d10,d5,d2,d1);
  return 0;
}
