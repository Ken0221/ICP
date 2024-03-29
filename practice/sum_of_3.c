#include<stdio.h>

int main()
{
  int n;
  scanf("%d", &n);
  
  int a, b, c;
  a = n / 100;
  n = n % 100;

  b = n / 10;
  n = n % 10;

  c = n;
  
  int sum = a + b + c;
  printf("%d", sum);

  return 0;
}
