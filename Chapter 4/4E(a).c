//use conditional operator
//character is lowercase or not, special symbol or not
#include<stdio.h>
int main()
{
    char c;
    printf("enter the character ");
    scanf("%c",&c);
    //c>=97,<=112--small letter
    //c>=0,<=47;>=58,<=64;>=91,<=96;>=123,<=127--special char
    (c>=97&&c<=122)?printf("lowercase\n"):printf("not lowercase\n");
    ((c>=0&&c<=47)||(c>=58&&c<=64)||(c>=91&&c<=96)||(c>=123&&c<=127))?printf("special char\n"):printf("not special char\n");
    return 0;
}
