#include<stdio.h>

int main()
{
  int n, m;
  scanf("%d %d", &n, &m);

  int t = n;
  while(n >= m){
    n -= m;
    n++;
    t++;
  }

  printf("%d", t);
  return 0;
}
