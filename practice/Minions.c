#include<stdio.h>

int main()
{
  int n, s;
  scanf("%d %d", &n, &s);

  int k = s + n;
  int t = 0;
  while(k != n){
    k /= 2;
    t++;
  }
  printf("%d", t * 10);

  return 0;
}
