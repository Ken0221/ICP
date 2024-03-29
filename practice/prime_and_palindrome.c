#include<stdio.h>

int main()
{
  int n;
  scanf("%d", &n);

  int m = n;
  int pL, pS;

  int t1 = 0;
  while(t1 == 0)
  {
    int sum = 0;
    for(int i = 1; i <= m; i++)
    {
      if(m % i == 0) sum++;
    }
    if(sum == 2) t1 = 1;
    else m++;
  }
  pL = m;

  m = n;

  int t2 = 0;
  while(t2 == 0)
  {
    int sum = 0;
    for(int i = 1; i <= m; i++)
    {
      if(m % i == 0) sum++;
    }
    if(sum == 2) t2 = 1;
    else m--;
  }
  pS = m;

  int p;
  if(n - pS >= pL - n) p = pL;
  else if(n - pS < pL - n) p = pS;
  else if(n - pS == 0 || n - pL == 0) p = n;

  printf("%d", p);
  

  int p1 = p;
  int i = 1;
  while(p1 != 0)//有幾位數
  {
    p1 /= 10;
    i *= 10;
  }
  int l, s;
  int PLD = 0;
  for(int j = 10; i > 10; j *= 10, i /= 10)//有無迴文
  {
    l = (p % j) / (j / 10);
    s = (p % i) / (i / 10);
    if(l == s) PLD = 1;
    else
    {
      PLD = 0;
      break;
    }
  }

  if(PLD == 1) printf("\nisPLD");

  return 0;
}
