#include <stdio.h>
int main()
{
    float sum=0.0;
    for(int i=1;i<=7;i++){
        float fact=1.0;
        for(int j=1;j<=7;j++){
            fact=fact*j;
        }
        sum=sum+(i/fact);
    }
    printf("sum=%d",sum);
    return 0;
}
