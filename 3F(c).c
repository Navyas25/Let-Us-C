#include<stdio.h>
void triangleValid(float a, float b, float c){
    if(a+b+c==180&&a>0&&b>0&&c>0)
    printf("valid");
    else
    printf("invalid");
}
int main()
{
    float a,b,c;
    printf("enter a:");
    scanf("%f",&a);
    printf("enter b:");
    scanf("%f",&b);
    printf("enter c:");
    scanf("%f",&c);
    triangleValid(a,b,c);
    return 0;
}
