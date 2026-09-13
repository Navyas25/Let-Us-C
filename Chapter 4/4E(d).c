//use conditional operator
//enter angle and find if the sum of squares of sine and cosine =1
#include<stdio.h>
#include<math.h>
#define PI 3.14159265
int main()
{
    int a;
    printf("enter the angle ");
    scanf("%d",&a); 
    a=a*(PI/180);
    pow(sin(a),2)+pow(cos(a),2)==1.0?printf("sum=1"):printf("sum!=1");
    return 0;
}
