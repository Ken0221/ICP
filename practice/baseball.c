#include<stdio.h>

int main()
{
  int h = 0;
  int b1 = 0, b2 = 0, b3 = 0;
  int out = 0;
  int r = 0;
  while(scanf("%d", &h) != EOF){
    if(h < 0 || h > 4){
      printf("Illegal input!");
      break;
    }
    if(h == 0){
      out++;
    }
    if(out >= 3){
      continue;
    }

   
    if (h == 1){
        int b1t = b1;
        int b2t = b2;
        int b3t = b3;
        b1 = 1;
        b2 = b1t;
        b3 = b2t;
        if(b3t == 1)
          r++;
    }

    if(h == 2){
        int b1t = b1;
        int b2t = b2;
        int b3t = b3;

        b2 = 1;
        b1 = 0;
        b3 = b1t;
        if(b3t == 1)
          r++;
        if(b2t == 1)
          r++;
    }

     if(h == 3){
        int b1t = b1;
        int b2t = b2;
        int b3t = b3;
        b3 = 1;
        b2 = 0;
        b1 = 0;
        if(b1t == 1)
          r++;
        if(b2t == 1)
          r++;
        if(b3t == 1)
          r++;
     }

    if(h == 4){
        int b1t = b1;
        int b2t = b2;
        int b3t = b3;

        b1 = 0;
        b2 = 0;
        b3 = 0;
        if(b1t == 1)
          r++;
        if(b2t == 1)
          r++;
        if(b3t == 1)
          r++;
        r++;
    }
  }
  if(h >= 0 && h <= 4)
    printf("%d", r);

  return 0;
}
