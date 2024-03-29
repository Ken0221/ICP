#include<stdio.h>

int main()
{
  float a, b, c;
  scanf("%f %f %f", &a, &b, &c);
  
  float u, v;
  scanf("%f %f", &u, &v);

  float k;
  float r, ru ,rv;
    
  while((v - u) >= 0.00001){
    ru = a * u * u + b * u + c;
    rv = a * v * v + b * v + c;

    k = (u + v) / 2.0;

    r = a * k * k + b * k + c;
    if(ru > 0){
      if(r > 0)
        u = k;
      else if(r < 0)
        v = k;
    }
    else if(ru < 0){
      if(r < 0)
        u = k;
      else if(r > 0)
        v = k;
    }
  }
  printf("%f", k);

  return 0;
}
