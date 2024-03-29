#include<stdio.h>

int main()
{
  int p;
  scanf("%d", &p);

  float A, B;
  scanf("%f %f", &A, &B);

  if((A < 0 || A > 1) && (B < 0 || B > 1))
    printf("Wrong mode!");
  else{
    float nA = 1.0 - A;
    float nB = 1.0 - B;
    
    float k;
    switch(p){
      case 0:
        k = (nA * 0.7) / (nB * 0.3 + nA * 0.7);
        break;

      case 1:
        k = (A * 0.3) / (B * 0.7 + A * 0.3);
        break;

      case 2:
        k = (nB * 0.7) / (nA * 0.3 + nB * 0.7);
        break;

      case 3:
        k = (B * 0.3) / (A * 0.7 + B * 0.3);
    }
    printf("%.2f", k);
  }


  return 0;
}
