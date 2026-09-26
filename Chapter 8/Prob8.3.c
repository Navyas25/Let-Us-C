#include <stdio.h>
//wap tp convert any given year to its roman equivalent
int roman(int y,int d,char c)
{
    int j=y/d;
    for(int i=1;i<=j;i++){
        printf("%c",c);
    }
    return(y%d);
}

int main()
{
    int yr;
    printf("enter the year:");
    scanf("%d",&yr);
    yr=roman(yr,1000,'m');
    yr=roman(yr,500,'d');
    yr=roman(yr,100,'c');
    yr=roman(yr,50,'l');
    yr=roman(yr,10,'x');
    yr=roman(yr,5,'v');
    roman(yr,1,'i');
    return 0;
}
