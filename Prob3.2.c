#include<stdio.h>
void oddEven(int n)
{
  if(n%2==0)
    printf("even");
  else
    printf("odd");
}
int main()
{
  int n;
  printf("enter the number:");
  scanf("%d",&n);
  oddEven(n);
  return 0;
}
