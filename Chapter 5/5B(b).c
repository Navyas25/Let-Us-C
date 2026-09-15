#include<stdio.h>
//print all armstrong numbers between 100 and 500
//sum of cubes of each digit of the number should be equal to the number itself
int main(){
    int i=100,d1,d2,d3;
    while(i<=500){
        int n=i;
        d1=n%10;
        n/=10;
        d2=n%10;
        n/=10;
        d3=n;
        if((d1*d1*d1)+(d2*d2*d2)+(d3*d3*d3)==i){
            printf("%d\n",i);
        }
        i++;
    }
    return 0;
}
