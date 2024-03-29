#include<stdio.h>

int main()
{
  int a[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
  int b[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
  float c[9] = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};

  for(int i = 0; i < 9; i++){
    scanf("%d", &a[i]);
  }
  for(int i = 0; i < 9; i++){
    scanf("%d", &b[i]);
  }

  int f;
  scanf("%d", &f);

  if(f == 1){
    for(int i = 0; i < 9; i++){
      c[i] = a[i] + b[i];
    }
    for(int i = 0; i < 9; i++){
      printf("%.3f ", c[i]);
      if((i + 1) % 3 == 0)
        printf("\n");
    }
  }

  if(f == 2){
    for(int i = 0; i < 9; i++){
      c[i] = a[i] - b[i];
    }
    for(int i = 0; i < 9; i++){
      printf("%.3f ", c[i]);
      if((i + 1) % 3 == 0)
        printf("\n");
    }
  }

  int ia = 0;
  int ib = 0;
  if(f == 3){
    for(int i = 0; i < 9; i++){
      if(ib > 10)
        ib = 0;
      else if(ib > 8)
        ib -= 8;
      for(int j = 0; j < 3; j++){
        c[i] += a[ia] * b[ib];
        ia++;
        ib += 3;
      }
      if(i < 2)
        ia = 0;
      else if(i < 5)
        ia = 3;
      else if(i < 8)
        ia = 6;
    }
    for(int i = 0; i < 9; i++){
      printf("%.3f ", c[i]);
      if((i + 1) % 3 == 0)
        printf("\n");
    }
  }

  if(f == 4){
    float det;
    det = a[0] * a[4] * a[8] + a[2] * a[3] * a[7] + a[1] * a[5] * a[6] - a[0] * a[5] * a[7] - a[1] * a[3] * a[8] - a[2] * a[4] * a[6];
    c[0] = a[4] * a[8] - a[5] * a[7];
    c[1] = a[1] * a[8] - a[2] * a[7];
    c[2] = a[1] * a[5] - a[2] * a[4];
    c[3] = a[3] * a[8] - a[5] * a[6];
    c[4] = a[0] * a[8] - a[2] * a[6];
    c[5] = a[0] * a[5] - a[2] * a[3];
    c[6] = a[3] * a[7] - a[4] * a[6];
    c[7] = a[0] * a[7] - a[1] * a[6];
    c[8] = a[0] * a[4] - a[1] * a[3];
    for(int i = 0; i < 9; i++){
      if(i % 2 == 1)
        c[i] = -1 * c[i];
      c[i] /= det;
      printf("%.3f ", c[i]);
      if((i + 1) % 3 == 0)
        printf("\n");
    }
  }

  return 0;
}
