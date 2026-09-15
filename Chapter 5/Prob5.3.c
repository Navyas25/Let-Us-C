#include<stdio.h>
//find one number raised to the power of other with while loop
int main(){
    int a,b,i=1,result=1;
    printf("enter the first number:");
    scanf("%d",&a);
    printf("enter the second number:");
    scanf("%d",&b);
    while(i<=b){
        result=a*result;
        i++;
    }
    printf("result=%d",result);
    return 0;
}
