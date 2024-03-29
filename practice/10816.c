#include<stdio.h>

int main(){
  float a[3][3] = {{0}};
  float b[3][3] = {{0}};
  float out[3][3] = {{0.0}};
  int n;
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++)
      scanf("%f", &a[i][j]);
  }
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++)
      scanf("%f", &b[i][j]);
  }
  scanf("%d", &n);
  switch(n){
    case 1:
      for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
          out[i][j] = a[i][j] + b[i][j];
        }
      }
      break;
    case 2:
      for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
          out[i][j] = a[i][j] - b[i][j];
        }
      }
      break;
    case 3:
      for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
          for(int k = 0; k < 3; k++)
            out[i][j] += a[i][k] * b[k][j];
        }
      }
      break;
  }
  if(n == 4){
    float det = a[0][0] * a[1][1] * a[2][2] + 
      a[0][2] * a[1][0] * a[2][1] + 
      a[0][1] * a[1][2] * a[2][0] - 
      a[0][2] * a[1][1] * a[2][0] - 
      a[0][0] * a[1][2] * a[2][1] - 
      a[0][1] * a[1][0] * a[2][2];
    float at[3][3] = {{0}};
    at[0][0] = a[1][1] * a[2][2] - a[1][2] * a[2][1];
    at[0][1] = -(a[0][1] * a[2][2] - a[0][2] * a[2][1]);
    at[0][2] = a[0][1] * a[1][2] - a[0][2] * a[1][1];
    at[1][0] = -(a[1][0] * a[2][2] - a[1][2] * a[2][0]);
    at[1][1] = a[0][0] * a[2][2] - a[0][2] * a[2][0];
    at[1][2] = -(a[0][0] * a[1][2] - a[0][2] * a[1][0]);
    at[2][0] = a[1][0] * a[2][1] - a[1][1] * a[2][0];
    at[2][1] = -(a[0][0] * a[2][1] - a[0][1] * a[2][0]);
    at[2][2] = a[0][0] * a[1][1] - a[0][1] * a[1][0];
    for(int i = 0; i < 3; i++){
      for(int j = 0; j < 3; j++){
        out[i][j] = at[i][j] / det;
      }
    }
  }
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      printf("%.3f ", out[i][j]);
    }
    printf("\n");
  }
  return 0;
}
