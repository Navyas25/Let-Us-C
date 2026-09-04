#include<stdio.h>
void numReverse(int n)
{
    int rev,d1,d2,d3,d4,d5,og;
    og=n;
    d1=n%10;
    n=n/10;
    d2=n%10;
    n=n/10;
    d3=n%10;
    n=n/10;
    d4=n%10;
    n=n/10;
    d5=n;
    rev=(d1*10000)+(d2*1000)+(d3*100)+(d4*10)+d5;
    printf("reversed num=%d",rev);
    if(og==rev)
    printf("\nnum=rev");
    else
    printf("\nnot =");
}
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    numReverse(n);
    return 0;
}
