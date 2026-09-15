#include<stdio.h>
//find factorial with while loop
int main(){
    int factorial=1,n,i=1;
    printf("enter the number:");
    scanf("%d",&n);
    if(n==0)
    printf("factorial=1");
    while(i<=n){
        factorial=factorial*i;
        i++;
    }
    printf("factorial=%d",factorial);
    return 0;
}
