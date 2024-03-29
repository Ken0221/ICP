#include<stdio.h>

int main()
{
  int pt, pp, nt, np;
  scanf("%d %d %d %d", &pt, &pp, &nt, &np);
  float st, sp;
  int tt = nt % 3;
  int tp = np % 2;
  st = 0.75 * (nt - tt) * pt + tt * pt;
  sp = 0.88 * (np - tp) * pp + tp * pp;
  float s = st + sp;
  int d = s / 1000;
  s -= 100 * d;
  printf("%.2f", s);

  return 0 ;
}
