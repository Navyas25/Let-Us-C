#include <stdio.h>
void colinear(int x1, int y1, int x2, int y2, int x3, int y3)
{
    if ((x2 - x1)*(y3 - y1)==(y2 - y1)*(x3 - x1))
    {
        printf("Points are collinear");
    }
    else
    {
        printf("Points are not collinear");
    }
}
int main()
{
    int x1, x2, x3, y1, y2, y3;
    printf("Enter x1 y1: ");
    scanf("%d %d", &x1, &y1);
    printf("Enter x2 y2: ");
    scanf("%d %d", &x2, &y2);
    printf("Enter x3 y3: ");
    scanf("%d %d", &x3, &y3);
    colinear(x1, y1, x2, y2, x3, y3);
    return 0;
}
