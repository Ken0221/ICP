#include<stdio.h>
#include<math.h>

int main()
{
  int x;
  scanf("%d", &x);

  double r = 0.0;
  double k = 1.0;
  double s = 1.0;
  double t = pow(10, -9);
  
  for(int i = 1; s >= t; i++){
    k *= i;
    double c = 1.0;
    double c_temp = x;
    for(int j = 0; j < i; j++){
      c *= c_temp;
    }
    s = c / k;
    r += s;
  }
  printf("%f", r + 1);
  return 0;
}
