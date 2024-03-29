#include<stdio.h>

int main()
{
  int a, b, c, d, e;
  scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

  int p = 0;
  int r = 0;
  for(int i1 = 0; i1 <= a; i1++)
  {
    if(e == 0)
    {
      r = 1;
    }
    p += i1;
    for(int i2 = 0; i2 <= b; i2++)
    {
      int p1 = p;
      if(p == 1)
      {
        if(e == 1)
        {
          r = 1;
        }
        p += i2;
      }
      for(int i3 = 0; i3 <= c; i3++)
      {
        int p2 = p;
        if(p == 2)
        {
          if(e == 2)
          {
            r = 1;
          }
          p += i3;
        }
        for(int i4 = 0; i4 <= d; i4++)
        {
          int p3 = p;
          if(p == 3)
          {
            if(e == 3)
            {
              r = 1;
            }
            p += i4;
          }
          if(p == e)
            r = 1;
          p = p3;
        }
        p = p2;
      }
      p = p1;
    }
    p = 0;
  }



  printf("%d", r);

  return 0;
}
