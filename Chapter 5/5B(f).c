//find the range of a set of numbers 
#include<stdio.h>
int main(){
    int n,i=1,max,d,min;
    printf("enter the number of numbers you want to enter:");
    scanf("%d",&n);
    while(i<=n){
        printf("enter %d number:",i);
        scanf("%d",&d);
        if(i==1){
            max=d;
            min=d;
            i++;
            continue;
        }
        if(max<d)
        max=d;
        if(min>d)
        min=d;
        i++;
    }
    printf("the range is %d",max-min);
    return 0;
}
