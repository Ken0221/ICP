#include<stdio.h>

int main()
{
  int n;
  scanf("%d", &n);

  int k = 1;
  while(k <= n){
    k *= 2;
  }
  k /= 2;

  while(n > 0 || k >= 1){
    if(k <= n){
      printf("1");
      n -= k;
    }
    else
      printf("0");

    k /= 2;
  }

  return 0;
}
