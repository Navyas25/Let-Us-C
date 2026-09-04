#include<stdio.h>
int area(int l,int b)
{
  return l*b;
}
int perimeter(int l, int b)
{
  return 2*(l+b);
}
void greater(int l, int b)
{
  int a,p;
  a=area(l,b);
  p=perimeter(l,b);
  if(a>p)
    printf("area is greater");
  else
    printf("perimeter is greater");
}
int main()
{
  int l,b;
  printf("enter the length and breadth:");
  scanf("%d %d",&l,&b);
  greater(l,b);
  return 0;
}
