#include<stdio.h>
int main(){
  int km_dist,m_dist,feet_dist,inches_dist,cm_dist;
  printf("enter the distance in kilometers:");
  scanf("%d",&km_dist);
  m_dist=km_dist*1000;
  feet_dist=km_dist*3281;
  inches_dist=feet_dist*12;
  cm_dist=m_dist*100;
  printf("dist in m=%d\n",m_dist);
  printf("dist in feet=%d\n",feet_dist);
  printf("dist in inches=%d\n",inches_dist);
  printf("dist in cm=%d",cm_dist);
  return 0;
}
