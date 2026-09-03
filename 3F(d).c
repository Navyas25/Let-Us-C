#include<stdio.h>
void absolute(int a)
{
  if(a<0)
    a=0-a;
  printf("absolute value of a is +%d",a);
}
int main()
{
  int n;
  printf("enter the number:");
  scanf("%d",&n);
  absolute(n);
  return 0;
}
