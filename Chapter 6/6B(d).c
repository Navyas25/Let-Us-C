#include <stdio.h>
#include<math.h>
int main()
{
    float x,n;
    printf("enter x:");
    scanf("%f",&x);
    for(int i=1;i<=7;i++){
       if(i==1){
           n=(x-1)/x;
       }
       else{
           n= (1.0/2.0) * pow((x-1)/x,i);
       }
       printf("the %d term is %f\n",i,n);
    }
    return 0;
}
