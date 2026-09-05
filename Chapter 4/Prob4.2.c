#include<stdio.h>
void characterChecker(char c)
{
    if(c>=65&&c<=90)
    printf("capital letter");
    else if(c>=97&&c<=122)
    printf("small letter");
    else if(c>=48&&c<=57)
    printf("digit");
    else if((c>=0&&c<=47)||(c>=58&&c<=64)||(c>=91&&c<=96)||(c>=123&&c<=127))
    printf("special character")
    
}
int main()
{
  int year;
  printf("enter the year:");
  scanf("%d",&year);
  characterChecker(year);
  return 0;
}
