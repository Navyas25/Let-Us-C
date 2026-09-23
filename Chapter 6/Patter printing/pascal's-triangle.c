//pascal's triangle
/*

    1 
   1 1 
  1 2 1 
 1 3 3 1 
1 4 6 4 1  


*/
#include<stdio.h>
int main(){
    for(int i=1;i<=5;i++){
        int n=1;
        for(int j=1;j<=5-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("%d ",n);
            n = n * (i - k) / k;
        }
        printf("\n");
    }
    return 0;
}
