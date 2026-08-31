#include<stdio.h>
#include<math.h>
#define PI 3.14159265
void trigRatios(float a)
{
  float sine,cosine,tangent,cotangent,secant,cosecant;
  a=a*(PI/180);
  sine=sin(a);
  cosine=cos(a);
  tangent=tan(a);
  cotangent=1.0/tangent;
  secant=1.0/cosine;
  cosecant=1.0/sine;
  printf("sin=%f\n",sine);
  printf("cos=%f\n",cosine);
  printf("tan=%f\n",tangent);
  printf("cot=%f\n",cotangent);
  printf("sec=%f\n",secant);
  printf("cosec=%f",cosecant);
}
int main()
{
  float angle;
  printf("enter the angle in degrees");
  scanf("%f",&angle);
  trigRatios(angle);
  return 0;
}
