#include <stdio.h>
#include<math.h>
int main()
{
    float p,r,n,q,a;
    for(int i=1;i<=10;i++){
        printf("enter p for the %d person:",i);
        scanf("%f",&p);
        printf("enter r (percent) for the %d person:",i);
        scanf("%f",&r);
        printf("enter n for the %d person:",i);
        scanf("%f",&n);
        printf("enter q for the %d person:",i);
        scanf("%f",&q);
        a= p*pow(1+(r/(q*100)),n*q);
        printf("amount=%f\n",a);
    }
    return 0;
}
