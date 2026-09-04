#include<stdio.h>
int leastAge(int a,int b,int c)
{
    int min;
    min=a;
    if(b<min)
    min=b;
    if(c<min)
    min=c;
    return min;
}
int main()
{
    int Ram,Shyam,Ajay,min;
    printf("enter Ram's age:");
    scanf("%d",&Ram);
    printf("enter Shyam's age:");
    scanf("%d",&Shyam);
    printf("enter Ajay's age:");
    scanf("%d",&Ajay);
    min=leastAge(Ram,Shyam,Ajay);
    if(min==Ram)
    printf("ram");
    else if(min==Shyam)
    printf("shyam");
    else
    printf("Ajay");

    return 0;
}
