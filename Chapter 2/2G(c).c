//recieve value of lats and longitudes in degree,output dist between them in nautical miles
//d=3963 cas-1(sinL1sinL2+cosL1cosL2*cos(G1-G2))
#include<stdio.h>
#include<math.h>
#define PI 3.14159265
float getDistance(float l1,float l2, float g1,float g2)
{
  float d;
    l1=l1*(PI/180);
    l2=l2*(PI/180);
    g1=g1*(PI/180);
    g2=g2*(PI/180);
  d=3963*acosf((sin(l1)*sin(l2))+((cos(l1)*cos(l2))*cos(g1-g2)));
  return d;
}
int main()
{
float g1,g2,l1,l2,d;
printf("enter the latitudes");
scanf("%f %f",&l1,&l2);  
printf("enter the longitudes");
scanf("%f %f",&g1,&g2);
d=getDistance(l1,l2,g1,g2);
printf("%f",d);
return 0;
}
