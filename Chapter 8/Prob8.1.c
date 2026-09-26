#include <stdio.h>
void factorial(int n)
{
    int fact=1;
    if(n==0)
    printf("factorial of 0 is 1\n");
    else{
        for(int i=1;i<=n;i++)
        {
            fact*=i;
        }
        printf("factorial of %d is %d\n",n,fact);
    }
}

int main()
{
    int n,choice;
    printf("enter the number:");
    scanf("%d",&n);
    factorial(n);
    return 0;
}
