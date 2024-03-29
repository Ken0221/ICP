#include<stdio.h>

int main()
{
  int n;
  scanf("%d", &n);

  //Q1
  int a, b, c;
  a = 0;
  b = 1;
  
  printf("%d %d", a, b);
  for(int i = 0;i < n - 2;i++)
  {
    c = a + b;
    printf(" %d", c);
    a = b;
    b = c;
  }
  
  //Q2 3
  int k = 1;
  double e;
  e = 1.0;
  for(int i = 0;i < n;i++)
  {
    k = k * (i + 1);
    e = e + (1.0 / k);
  }
  printf("\n%d", k);
  printf("\n%f", e);

  return 0;
}
