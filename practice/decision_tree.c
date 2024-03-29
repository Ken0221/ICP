#include<stdio.h>

int main()
{
  int n;
  scanf("%d", &n);
  int a;
  if(n > 50)
  {
    if(n > 78)
    {
      if(n > 82) printf("L5");
      else printf("L4");
    }
    else printf("L3");
  }
  else
  {
    if(n > 24) printf("L2");
    else
    {
      if(n > 5) printf("L1");
      else printf("L0");
    }
  }
  return 0;
}
