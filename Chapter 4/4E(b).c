//use conditional operator
//year is leap or not
#include<stdio.h>
int main()
{
    int yr;
    printf("enter the year ");
    scanf("%d",&yr);
    //yr divisable by 4 or 400
    yr%400==0||(yr%4==0&&yr%100!=0)?printf("leap year \n"):printf("not leap year\n");
    return 0;
}
