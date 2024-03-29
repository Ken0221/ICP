#include<stdio.h>

int main()
{
  float a1, a2, a3;
  float q1, q2, q3;
  float m1, m2;
  float f;
  scanf("%f %f %f %f %f %f %f %f %f", &a1, &a2, &a3, &q1, &q2, &q3, &m1, &m2, &f);

  float a = (a1 + a2 + a3) / 3 * 0.2;
  float q = (q1 + q2 + q3) / 3 * 0.3;
  float m = (m1 + m2) / 2 * 0.25;
  f = f * 0.25;

  int g = a + q + m + f;
  if(g >= 90)
    printf("A");
  if(90 > g && 80 <= g)
    printf("B");
  if(80 > g && 70 <= g)
    printf("C");
  if(70 > g && 60 <= g)
    printf("D");
  if(60 > g)
    printf("F");


  return 0;


}
