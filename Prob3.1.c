//wap to get profit or loss 
#include<stdio.h>
void profitLoss(float cp,float sp)
{
  if(cp<sp)
    printf("profit=Rs.%f",sp-cp);
  else
    printf("loss=Rs.%f",cp-sp);
}
int main()
{
  float cp,sp;
  printf("enter cost price and selling price:");
  scanf("%f %f",&cp,&sp);
  profitLoss(cp,sp);
  return 0;
}
