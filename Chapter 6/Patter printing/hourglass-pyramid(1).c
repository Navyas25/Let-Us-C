//hourglass pyramid
/*  * * * * 
     * * * 
      * * 
       * 
      * * 
     * * * 
    * * * * 
*/

#include<stdio.h>
int main(){
    for(int i=1;i<=7;i++){
        if(i<=4){
            for(int j=1;j<=i-1;j++){
                printf(" ");
            }
            for(int k=1;k<=5-i;k++){
                printf("* ");
            }
        }
        else{
            for(int j=1;j<=7-i;j++){
                printf(" ");
            }
            for(int k=1;k<=i-3;k++){
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}
}
