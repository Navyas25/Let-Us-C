//three ways
//full pyramid
/*  * 
   * * 
  * * * 
 * * * * 
* * * * *   */
#include <stdio.h>
int main()
{
    for(int i=1;i<=5;i++){
        for(int j=1;j<=6-i;j++){//to print an inverted right pyramid of blanks
            printf(" ");
        }
        for(int k=1;k<=i;k++){                                                                  
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
