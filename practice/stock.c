#include<stdio.h>

int main()
{
  int n;
  scanf("%d", &n);
  int a = n, b = n;
  int i = 0;
  int ta = i, tb = i;

  int k = 0;
  while(scanf("%d", &n) != EOF){
    i++;
    if(n > a || n - b > k){
      a = n;
      ta = i;
    }
    if(n < b){
      b = n;
      tb = i;
    }
    if(a - b > k && ta > tb){
      k = a - b;
    }
  }

  printf("%d", k);

  return 0;
}
