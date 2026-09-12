
// wap to find bmi
#include<stdio.h>
#include<math.h>
float bmi(float w,float h)
{
    h=h/100;
    return w/pow(h,2);
}
int main()
{
    float h,w,bmi;
    printf("enter your height in cm");
    scanf("%f",&h);
    printf("enter your weight in kg");
    scanf("%f",&w);
    result=bmi(w,h);
    if(bmi<15)
    printf("starvation");
    else if(bmi>15&&bmi<=17.5)
    printf("anorexic");
    else if(bmi>17.5&&bmi<=18.5)
    printf("underweight");
    else if(bmi>18.5&&bmi<=24.9)
    printf("ideal");
    else if(bmi>24.9&&bmi<=25.9)
    printf("overweight");
    else if(bmi>25.9&&bmi<=30.9)
    printf("obese");
    else
    printf("morbidly obese");
    return 0;
}
