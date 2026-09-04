#include<stdio.h>
//A0=1189mmX841mm, A1= A0 divided in half=841X594mm
int main(){
  int l=1189,b=841;
  for(int i=1;i<=8;i++){
    int temp=b;
    b=l/2;
    l=temp;
    printf("the dimensions of A%d paper are:%d X %d mm",i,l,b);
  }
  return 0;
}
