//initial=10000,increase rate=10% per yr, last ten yrs
#include <stdio.h>
int main()
{
    int population=10000;
    for(int i=1;i<=10;i++){
        population=population+(population*0.1);
        printf("new population after %d years=%d\n",i,population);
    }
    return 0;
}
