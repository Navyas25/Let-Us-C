#include<stdio.h>
int main(){
  //input degree f and convert to degree c
  float f,c;
  printf("enter the temp in degree fahrenheit:");
  scanf("%f",&f);
  c=(f-32)*5.0/9.0;
  printf("temperature in degree celcius is:%.2f",c);
  return 0;
}
