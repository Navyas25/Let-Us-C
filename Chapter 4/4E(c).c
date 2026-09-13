//use conditional operator
//greatest of 3 numbers
#include<stdio.h>
int main()
{
    int a,b,c,max;
    printf("enter the numbers ");
    scanf("%d %d %d",&a,&b,&c);
    max=a;
    max=max<b?b:max;
    max=max<c?c:max;
    printf("max=%d",max);
    return 0;
}
