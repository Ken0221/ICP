#include<stdio.h>

int main()
{
  int a, b;
  scanf("%d %d", &a, &b);

  int a1, a2, b1, b2;
  a1 = a / 10;
  a2 = a % 10;
  b1 = b / 10;
  b2 = b % 10;

  int n1, n2, m2, m3;
  int k1 = 0, k2 = 0, k3 = 0, k4 = 0;
  int i = 0;

  n1 = a2 * b2;
  n2 = a1 * b2;
  m2 = a2 * b1;
  m3 = a1 * b1;

  k1 = n1;
  k2 = n2 + m2;
  k3 = m3;

  if(k2 == 2)
  {
    k2 = 0;
    k3 += 1;
    if(k3 == 2)
    {
      k3 = 0;
      k4 += 1;
    }
  }

  printf("%d%d%d%d", k4, k3, k2, k1);

  return 0;
}
