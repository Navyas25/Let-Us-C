#include<stdio.h>
#include<math.h>
void polarCoordinates()
{
  int x,y;
  double r, phi;
  printf("enter the coodrdinates:");
  scanf("%d %d",&x,&y);
  printf("cartesian coordinates=(%d,%d)",x,y);
  r=sqrt((pow(x,2))+(pow(y,2)));
  phi=atan2(y,x);
  printf("polar coordinates=(%lf,%lf)",r,phi);
}
int main()
{
  polarCoordinates();
  return 0;
}
