#include<stdio.h>
//input marks of 5 subjects, find aggregate and percentage
int main(){
  int math,english,sst,science,hindi;
  float agg;
  printf("enter math marks:");
  scanf("%d",&math);
  printf("\nenter english marks:");
  scanf("%d",&english);
  printf("\nenter sst marks:");
  scanf("%d",&sst);
  printf("\nenter science marks:");
  scanf("%d",&science);
  printf("\nenter hindi marks:");
  scanf("%d",&hindi);
  agg=(math+hindi+english+sst+science);
  printf("Agg=%f\n",agg);
  printf("percentage=%f",agg/5);
  return 0;
}
