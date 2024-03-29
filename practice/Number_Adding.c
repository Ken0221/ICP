#include<stdio.h>

int main()
{
  int n;
  scanf("%d", &n);
  int nt = n;
  int t = 1;
  for(int i = 1; nt >= 10; i *= 10){
    nt = n;
    nt /= i;
    if(nt >= 10)
      t *= 10;
  }

  nt = n;

  int s = n;
  while(s >= 10){
    s = 0;
    while(t >= 1){
      s = s + (nt / t);
      nt %= t;
      t /= 10;
    }

    t = 1;
    int st = s;
    while(st >= 10){
      st = s;
      st /= t;
      if(st >= 10)
        t *= 10;
    }
    nt = s;
  }
  
  printf("%d", s);

  return 0;
}
