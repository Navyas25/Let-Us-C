//wap to convert rgb color to cmyk format
#include<stdio.h>
float max(float a,float b, float c)
{
    float max=a;
    if(max<b)
    max=b;
    if(max<c)
    max=c;
    return max;
}
void convertToCMYK(float r, float g, float b)
{
    float white,c,m,y,k;
    r=r/255.0;
    g=g/255.0;
    b=b/255.0;
    if(r==0&&g==0&&b==0){
        c=0;
        m=0;
        y=0;
        k=1;
    }
    else{
        white=max(r,g,b);
        c=(white-r)/white;
        m=(white-g)/white;
        y=(white-b)/white;
        k=1-white;
    }
    printf("the cmyk colors are: ( %f , %f , %f , %f )",c,m,y,k);
    
}
int main()
{
    float r,g,b;
    printf("enter rgb:");
    scanf("%f%f%f",&r,&g,&b);
    convertToCMYK(r,g,b);
    return 0;
}
