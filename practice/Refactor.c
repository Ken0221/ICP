#include<stdio.h>

int main()
{
  int n;
  scanf("%d", &n);

  int nt = n;
  int r = 1;
  int t = 1;
  for(int i = 10; r > 0; i *= 10)
  {
    r = nt / i;
    nt = n;
    t *= 10;
  }
  t /= 10;
 
  int a = 0;
  a = n / t;
  n %= t;
  t /= 10;

  int b = 0;
  b = n / t;
  int time = 1;
  
  while(t >= 0){
    if(a != b){
      printf("%d%d", time, a);
      if(t != 0){
        a = n / t;
        if(t != 1)
          b = (n % t) / (t / 10);
        else
          b = -1;
      }
      else
        break;
      time = 1;
    }
    else{
      time++;
      if(t != 1)
        b = (n % t) / (t / 10);
      else
        b = -1;
    }
    n = n % t;
    t /= 10;
  }

  return 0;
}
