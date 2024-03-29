#include<stdio.h>
#include<math.h>

int main()
{
  int x1, y1, x2, y2, x3, y3;
  scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);

  float d1, d2, d3;
  d1 = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
  d2 = (x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3);
  d3 = (x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2);
  if(d1 > d2){
    int t = d1;
    d1 = d2;
    d2 = t;
  }
  if(d2 > d3){
    int t = d2;
    d2 = d3;
    d3 = t;
  }
  float d1s = sqrt(d1);
  float d2s = sqrt(d2);
  float d3s = sqrt(d3);
  if(d1s + d2s <= d3s)
    printf("it's not a triangle");
  else if(d1 == d2)
    printf("isosceles");
  else if(d1 + d2 == d3)
      printf("right");
  else if(d1 + d2 < d3)
      printf("obtuse");
  else if(d1 + d2 > d3)
      printf("acute");

  return 0;
}
