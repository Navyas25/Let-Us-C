#include <stdio.h>
int main()
{
    for(int i=1;i<=2;i++){
        for(int j=1;j<=12;j++){
            if(i==1){
                printf("%d AM\n",j);
            }
            else
            printf("%d PM\n",j);
        }
    }
    return 0;
}
