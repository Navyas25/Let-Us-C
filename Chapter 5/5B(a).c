#include<stdio.h>
//print all ascii values and equivalent char using while loop
int main(){
    int i=0;
    while(i<=255){
        printf("ASCII value of %d is %c\n",i,i);
        i++;
    }
    return 0;
}
