//diamond pyramid
/*   * 
    * * 
   * * * 
  * * * * 
   * * * 
    * * 
     *    */
#include<stdio.h>
int main(){
    for(int i=1;i<=8;i++){
        if(i<=4){
            for(int j=1;j<=4-i;j++){
                printf(" ");
            }
            for(int k=1;k<=i;k++){
                printf("* ");
            }
        }
        else{
            for(int j=1;j<=i-4;j++){
                printf(" ");
            }
            for(int k=1;k<=8-i;k++){
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}
