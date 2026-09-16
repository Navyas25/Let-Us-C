//wap to recieve number and print its ocatal equivalent
#include <stdio.h>
int main()
{
    int n,d,octal=0,place=1;
    printf("enter the number of numbers you want to enter:");
    scanf("%d",&n);
    while(n>0){
        d=n%8;
        octal=octal+(d*place);
        n=n/8;
        place*=10;
    }
    printf("octal number=%d",octal);
    return 0;
}
