#include<stdio.h>

int main()
{
  int n;
  scanf("%d", &n);

  if(n == 0)
    printf("0");
  /*
  int t = 1;
  while(n >= t){
    t *= 2;
  }
  t /= 2;
  while(t >= 1){
    if(t <= n){
      n-= t;
      t /= 2;
      printf("1");
    }
    else{
      t /= 2;
      printf("0");
    }
  }*/

  int r[100];
  int t = 0;
  for(int i = 0; n >= 1; i++){
  r[i] = n % 2;
  n /= 2;
  t++;
  }
  for(int i = t - 1; i >= 0; i--){
  printf("%d", r[i]);
  }
  return 0;
}
