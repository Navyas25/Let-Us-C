#include<stdio.h>
//input l and b of rectangle and r of circle-find area,perimeter,circumference
int main(){
  float l,b,r,arear,areac,perimeter,circum;
  printf("enter the length and breadht of a rectangle:");
  scanf("%f %f",&l,&b);
  printf("\nenter the radius of a circle:");
  scanf("%f",&r);
  arear=l*b;
  areac=3.14*r*r;
  perimeter=2*(l+b);
  circum=4*3.14*r;
  printf("area and perimeter of rectangle=%.2f and %.2f",arear,perimeter);
  printf("\narea and circumference of the circle=%.2f and %.2f",areac,circum);
  return 0;
}
