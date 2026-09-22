//hourglass pyramid
/*  

* * * * * * * 
  * * * * * 
    * * * 
      * 
    * * * 
  * * * * * 
* * * * * * * 

*/

#include<stdio.h>
int main(){
    for(int i=1;i<=7;i++){
        if(i<=4){
            for(int j=1;j<=(2*i)-2;j++){
                printf(" ");
            }
            for(int k=1;k<=2*(5-i)-1;k++){
                printf("* ");
            }
        }
        else{
            for(int j=1;j<=2*(7-i);j++){
                printf(" ");
            }
            for(int k=1;k<=2*(i-3)-1;k++){
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}
