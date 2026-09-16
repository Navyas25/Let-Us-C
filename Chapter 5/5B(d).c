//wap to enter numbers till user wants,at the end, display no of positive, negative and zeros
#include <stdio.h>
int main()
{
    int n,i=1,m,pos=0,neg=0,zero=0;
    printf("enter the number of numbers you want to enter:");
    scanf("%d",&n);
    while(i<=n){
        printf("\nenter number:");
        scanf("%d",&m);
        if(m>0)
        pos++;
        else if(m<0)
        neg++;
        else
        zero++;
        i++;
    }
    printf("number of positive numbers: %d\n",pos);
    printf("number of negative numbers: %d\n",neg);
    printf("number of zeros: %d\n",zero);
    return 0;
}
