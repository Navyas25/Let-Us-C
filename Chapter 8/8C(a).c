#include <stdio.h>
//function to check if leap yr
void leapyrCheckr(int yr){
    if (yr%100==0){
        if(yr%400==0){
            printf("leap year\n");
        }
        else
        printf("not leap\n");
    }
    else if(yr%4==0){
        printf("leap\n");
    }
    else
    printf("not leap");
}
int main()
{
    int yr;
    printf("enter the year:");
    scanf("%d",&yr);
    leapyrCheckr(yr);
    return 0;
}
