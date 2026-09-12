// wap to find the grade of steel
#include<stdio.h>
int main()
{
    int hardness,tensileStrength;
    float carbonContent;
    int cond1,cond2,cond3;
    printf("enter the hardness:");
    scanf("%d",&hardness);
    printf("enter the tensile strength");
    scanf("%d",&tensileStrength);
    printf("enter the carbon content");
    scanf("%f",&carbonContent);
    cond1=hardness>50;
    cond2=carbonContent<0.7;
    cond3=tensileStrength>5600;
    if(cond1||cond2||cond3){
        if(cond1&&cond2&&cond3)
        printf("grade 10");
        else if(cond1&&cond2)
        printf("grade 9");
        else if(cond2&&cond3)
        printf("grade 8");
        else if(cond1&&cond3)
        printf("grade 7");
        else
        printf("grade 6");
    }
    else
    printf("grade 5");
    
    
    return 0;
}
