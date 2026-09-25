//generate all pythagorean triplets with side length less than 30
#include <stdio.h>
#include<math.h>
int main()
{
    for(int i=1;i<=30;i++){
        for(int j=i+1;j<=30;j++){
            for(int k=j+1;k<=30;k++){
                if(i*i+j*j==k*k){
                printf("%d %d %d\n",i,j,k);
                }
            }
        }
    }
    return 0;
}
