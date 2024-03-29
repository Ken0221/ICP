#include<stdio.h>

int main()
{
  int m;
  float h;
  scanf("%d %f", &m, &h);

  float t = h / 2;
  for(m; m > 0; m--){
    if(m % 2 == 1){
      h += t;
      t /= 2;
    }
    if(t < 0.5)
      break;
  }
  printf("%f", h);
}
