#include <stdio.h>
#include<math.h>
void incircle(int h, int k, int x, int y, int r)
{
  int sq_dist;
  float dist;
  sq_dist=pow((x-h),2)+pow((y-k),2);
  dist=sqrt(sq_dist);
  if(dist<r)
    printf("inside the circle");
  else if(dist==r)
    printf("on the circle");
  else
    printf("outside the circle");
  
}

int main()
{
    int h, k, r, x, y;

    printf("Enter h, k and r: ");
    scanf("%d %d %d", &h, &k, &r);

    printf("Enter x, y: ");
    scanf("%d %d", &x, &y);

    incircle(h,k,x,y,r);

    return 0;
}
