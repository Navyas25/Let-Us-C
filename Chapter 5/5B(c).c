//matchstick game with while loop
//comp should always win
//21 matchstiks-can pick 1,2,3,4
//to always win, combined matchsticks after each turn should=5
#include <stdio.h>
int main()
{
    int n,m,i=1,left=21;
    printf("\n--------MATCHSTICK GAME--------\n");
    while(left>1){
        printf("\nturn %d\n",i);
        printf("enter your pick - 1,2,3 or 4: ");
        scanf("%d",&n);
        if(n<1||n>4){
            printf("invalid choice!");
            continue;
        }
        m=5-n;
        printf("my pick is: %d matchsticks\n",m);
        left-=5;
        printf("matchsticks left= %d\n",left);
        i++;
    }
    printf("I WIN!");
    return 0;
}
