//hollow full pyramid
#include <stdio.h>
int main()
{
    for(int i=1;i<=5;i++){
        for(int j=1;j<=2*(5-i);j++){
            printf(" ");
        }
        if(i>1&&i<5){
            for(int j=1;j<=(2*i)-1;j++){
                if(j==1||j==(2*i)-1){
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }
        }
        else{
            for(int j=1;j<=(2*i)-1;j++){
                printf("* ");
            }
        }
        
        printf("\n");
    }
    return 0;
}
