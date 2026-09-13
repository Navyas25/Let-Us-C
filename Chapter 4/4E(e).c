//use conditional operator
#include<stdio.h>
int main()
{
    float sal;
    printf("enter the salary ");
    scanf("%f",&sal); 
    (sal>=25000&&sal<=40000)?printf("Manager\n"):((sal>=15000&&sal<25000)?printf("Accountant\n"):printf("clerk\n"));
    return 0;
}
