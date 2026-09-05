#include<stdio.h>
int greatest;
int max(int a,int b,int c)
{
    greatest=a;
    if(b>greatest)
    greatest=b;
    if(c>greatest)
    greatest=c;
    return greatest;
}
void isValidTriangle(int a,int b, int c)
{
    int largest=max(a,b,c);
    if(a>0&&b>0&&c>0){
    if(greatest==a&&b+c>greatest)
    printf("valid");
    else if(greatest==b&&a+c>greatest)
    printf("valid");
    else if(greatest==c&&b+a>greatest)
    printf("valid");
    else
    printf("invalid");
    }
    else
    printf("invalid");
}
int main()
{
  int a,b,c;
  printf("enter the sides:");
  scanf("%d %d %d",&a,&b,&c);
  isValidTriangle(a,b,c);
  return 0;
}
