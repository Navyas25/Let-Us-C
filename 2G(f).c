#include<stdio.h>
void swap1(int a,int b){
  printf("before swapping: a=%d b=%d\n",a,b);
  int temp;
  temp=a;
  a=b;
  b=temp;
  printf("after swapping: a=%d b=%d\n",a,b);
}
void swap2(int a,int b){
  printf("before swapping: a=%d b=%d\n",a,b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf("after swapping: a=%d b=%d\n",a,b);
}
void swap3(int a,int b){
  printf("before swapping: a=%d b=%d\n",a,b);
  a=a^b;
  b=a^b;
  a=a^b;
  printf("after swapping: a=%d b=%d\n",a,b);
}
int main()
{
  int a,b;
  printf("enter a and b:");
  scanf("%d %d",&a,&b);
  swap1(a,b);
  swap2(a,b);
  swap3(a,b);
  return 0;
}
