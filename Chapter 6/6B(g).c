//print all numbers that can be expressed as a sum of two cubes in 2 diff ways  upto 100000
#include <stdio.h>
#include<math.h>
int main()
{
    for(int i=1729;i<=100000;i++){
        int count=0;
        for(int j=1;j<=46;j++){
            for(int k=j+1;k<=46;k++){
                if(pow(j,3)+pow(k,3)==i)
                count++;
            }
        }
        if(count>=2){
            printf("%d\n",i);
        }
    }
    return 0;
}
