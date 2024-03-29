#include<stdio.h>

int main()
{
  double a;
  double k = 0.0;
  for(int i = 0; i < 10000000; i++){
    int j;
    if(i % 2 == 0)
      j = -1;
    else
      j = 1;
    
    k += j * (1.0 / (3.0 + (i * 2.0)));
  }
  a = 4 * (1 + k);
  printf("%.6f", a);

  return 0;
}
