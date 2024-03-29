#include<stdio.h>

int main()
{
  float x1, y1, x2, y2, x3, y3, x4, y4;
  scanf("%f %f %f %f %f %f %f %f", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);

  float L1 = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
  float L2 = (x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3);
  float L3 = (x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2);
  float xc, yc;
  int r = 1;
  if(L1 < L2){ 
    L1 = L2;
    r = 2;
  }
  if(L2 < L3){
    L1 = L3;
    r = 3;
  }
  float m1, m2;
  switch(r){
    case 1:
      xc = (x1 + x2)/2;
      yc = (y1 + y2)/2;
      m1 = (x1 - x3) / (y1 - y3);
      m2 = (x2 - x4) / (y2 - y4);
      break;

    case 2:
      xc = (x1 + x3)/2;
      yc = (y1 + y3)/2;
      m1 = (x1 - x2) / (y1 - y2);
      m2 = (x3 - x4) / (y3 - y4);
      break;

    case 3:
      xc = (x2 + x3)/2;
      yc = (y2 + y3)/2;
      m1 = (x1 - x3) / (y1 - y3);
      m2 = (x2 - x4) / (y2 - y4);
      break;
  }

  float d1 = (xc - x1) * (xc - x1) + (yc - y1) * (yc - y1);
  float d2 = (xc - x2) * (xc - x2) + (yc - y2) * (yc - y2);
  float d3 = (xc - x3) * (xc - x3) + (yc - y3) * (yc - y3);
  float d4 = (xc - x4) * (xc - x4) + (yc - y4) * (yc - y4);
  int s = 0;
  if(d1 == d2 && d2 == d3 && d3 == d4 && m1 == m2)
    printf("It is a rectangle!");
  else
    printf("It is not a rectangle!");

  return 0;

}
