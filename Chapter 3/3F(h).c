#include <stdio.h>
void onaxes(int x, int y)
{
  if(x==0&&y!=0)
    printf("on y axis");
  else if(x!=0&&y==0)
    printf("on x axis");
  else if(x==0&&y==0)
    printf("on origion");
  else
    printf("not on axes or origion");
}

int main()
{
    int x, y;
    printf("Enter x, y: ");
    scanf("%d %d", &x, &y);
    onaxes(x,y);
    return 0;
}
