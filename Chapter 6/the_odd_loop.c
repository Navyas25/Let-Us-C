//odd loop-do while can be used when we dont know when loop should end
#include <stdio.h>

int main()
{
    char another;
    int num;
    do{
        printf("enter a number:");
        scanf("%d",&num);
        printf("square=%d\n",num*num);
        printf("want to enter another number?(y/n)\n");
        fflush(stdin);//not work everytime due to diff compiler
        scanf(" %c",&another);//%c take \n from buffer instead of another value as buffer not clear, so add space to ignore white spaces and \n
    }while(another=='y');
    return 0;
}
