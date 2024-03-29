#include<stdio.h>

int main()
{
  int n;
  scanf("%d", &n);

  int a, b, c;
  a = n / 10000;
  n = n % 10000;
  b = n / 100;
  n = n % 100;
  c = n;

  int class;
  class = (a + b + c) % 4;
  switch(class)
  {
    case 0:
      printf("Class A");
      break;

    case 1:
      printf("Class B");
      break;

    case 2:
      printf("Class C");
      break;

    case 3:
      printf("Class D");
      break;
  }
  return 0;
}
