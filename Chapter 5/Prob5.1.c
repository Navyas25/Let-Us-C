#include<stdio.h>
//calc overtime pay for 10 employees
int main(){
    int overtimePay;
    int hours,i=1;
    while(i<=10){
        printf("enter no of hours worked:");
        scanf("%d",&hours);
        if(hours>40){
            overtimePay=(hours-40)*120;
        }
        else{
            overtimePay=0;
        }
        printf("overtime pay=%d\n",overtimePay);
        i++;
    }
    return 0;
}
