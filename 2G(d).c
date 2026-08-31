//wap to recieve values of t and v and calculate windchill factor
//wcf=35.74+0.6215t+(0.4275t-35.75)*v^0.16
#include<stdio.h>
#include<math.h>
double getWcf(double t,double v)
{
  double wcf;
  wcf=35.74+(0.6215*t)+(((0.4275*t)-35.75)*pow(v,0.16));
  return wcf;
}
int main()
{
  double t,v,wcf;
  printf("enter t and v");
  scanf("%lf %lf",&t,&v);
  wcf=getWcf(t,v);
  printf("%lf",wcf);
  return 0;
}
