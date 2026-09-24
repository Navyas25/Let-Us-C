//i=2+(y+0.5x)..y-1-6,x-5.5-12.5,0.5
#include <stdio.h>
int main()
{
    int y;
    float x,i;
    for(y=1;y<=6;y++){
        for(x=5.5;x<=12.5;x=x+0.5){
            i=2+(y+(0.5*x));
            printf("i=%f\n",i);
        }
    }
    return 0;
}
