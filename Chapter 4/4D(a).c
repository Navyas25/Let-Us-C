#include<stdio.h>
int Isosceles(int a,int b,int c)
{
    if((a==b||b==c||c==a)&&(!(a==b&&b==c)))
    return 1;
    else
    return 0;
}
int Equilateral(int a, int b, int c)
{
    if(a==b&&b==c)
    return 1;
    else
    return 0;
}
int Scalene(int a, int b, int c)
{
    if(a!=b&&b!=c&&c!=a)
    return 1;
    else
    return 0;
}
int Right(int a, int b, int c)
{
    if((a*a==b*b+c*c)||(b*b==a*a+c*c)||(c*c==b*b+a*a))
    return 1;
    else 
    return 0;
}
void triangleType(int a,int b, int c)
{
    
    if(a>0&&b>0&&c>0){
        if(Right(a,b,c))
        printf("right angled");
        else if(Equilateral(a,b,c))
        printf("equilateral");
        else if(Scalene(a,b,c))
        printf("scalene");
        else if(Isosceles(a,b,c))
        printf("isosceles");
    }
    else
    printf("invalid");
}
int main()
{
  int a,b,c;
  printf("enter the sides:");
  scanf("%d %d %d",&a,&b,&c);
  triangleType(a,b,c);
  return 0;
}
