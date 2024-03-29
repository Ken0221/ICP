#include<stdio.h>

int main()
{
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);

  if(a + b > c && b + c > a && a + c > b)
  {
    int n;
    int t;
    if(a > b)
    {
      t = a;
      a = b;
      b = t;
    }
    if(b > c)
    {
      t = b;
      b = c;
      c = t;
    }
    if(c > a)
    {
      t = c;
      c = a;
      a = t;
    }
    if(c * c + b * b > a * a) printf("1");
    if(c * c + b * b == a * a) printf("2");
    if(c * c + b * b < a * a) printf("3");
  }
  else
  {
    printf("0");
  }
  return 0;
}
