#include<stdio.h>

int main()
{
  int a;
  scanf("%d", &a);
  
  int n1, n2, n3;
  if(a > 50)
  {
    if(a > 78)
    {
      if(a > 82) printf("L5");
      else if(a < 82) printf("L4");
    }
    else if(a < 78) printf("L3");
  }
  else if(a < 50)
  {
    if(a > 24)
    {
      printf("L2");
    }
    else if(a < 24)
    {
      if(a > 5) printf("L1");
      else if(a < 5) printf("L0");
    }
  }

  return 0;
}
