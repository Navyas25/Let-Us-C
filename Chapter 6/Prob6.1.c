//print all prime numbers between 1 to 300
#include <stdio.h>
#include<math.h>
int main()
{
    
    for(int i=2;i<=300;i++){
        int n=pow(i,0.5);
        int prime=1;
        for(int j=2;j<n+1;j++){
            if(i%j==0){
                prime=0;
                break;
            }
        }
        if(prime==1)
        printf("%d\n",i);
    }
    return 0;
}
