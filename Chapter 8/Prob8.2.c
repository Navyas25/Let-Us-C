#include <stdio.h>
void power(int a,int b)
{
    int result=1;
    for(int i=1;i<=b;i++){
        result*=a;
    }
    printf("%d raised to the power %d is %d",a,b,result);
}

int main()
{
    int a,b;
    printf("enter the a and b:");
    scanf("%d %d",&a,&b);
    power(a,b);
    return 0;
}
