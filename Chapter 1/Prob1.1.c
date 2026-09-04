#include<stdio.h>
//da=40% of basic salary,hra=20% of basic salary,calc gross salary
//gross salary=basic salary+da+hra
int main(){
  int bs,hra,da,gs;
  printf("Enter the basic salary:");
  scanf("%d",&bs);
	da=bs*40/100;
  hra=bs*20/100;
  gs=bs+da+hra;
  printf("gross salary is:%d",gs);
  return 0;
}
