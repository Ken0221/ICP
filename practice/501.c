#include<stdio.h>
#define HEIGHT 40
#define WIDTH 80

int Operate(int type, int i, int j, int m[HEIGHT][WIDTH]){
  int sum = 0;
  if(type == 0){
    for(int k = i - 1; k <= i + 1; k++){
      for(int l = j - 1; l <= j + 1; l++){
        sum += m[k][l];
      }
    }
    return (sum / 9);
  }
  else if(type == 1){
    for(int k = i - 2; k <= i + 2; k++){
      for(int l = j - 2; l <= j + 2; l++){
        sum += m[k][l];
      }
    }
    return (sum / 25);
  }
  else if(type == 2){
    int f_sum = 0;
    int f[3][3] = {{1, 2, 1}, {2, 4, 2}, {1, 2, 1}};
    for(int k = i - 1; k <= i + 1; k++){
      for(int l = j - 1; l <= j + 1; l++){
        sum += (m[k][l] * f[k - (i - 1)][l - (j - 1)]);
        f_sum += f[k - (i - 1)][l - (j - 1)];
      }
    }
    return (sum / f_sum);
  }
}

int main()
{
  int type = 0;
  scanf("%d", &type);
  int m[HEIGHT][WIDTH] = {{0}};
  int out[HEIGHT][WIDTH] = {{0}};
  for(int i = 0; i < HEIGHT; i++){
    for(int j = 0; j < WIDTH; j++){
      scanf("%d", &m[i][j]);
      out[i][j] = m[i][j];
    }
  }

  if(type == 0 || type == 2){
    for(int i = 1; i < HEIGHT - 1; i++){
      for(int j = 1; j < WIDTH - 1; j++){
        out[i][j] = Operate(type, i, j, m);
      }
    }
  }
  else if(type == 1){
    for(int i = 2; i < HEIGHT - 2; i++){
      for(int j = 2; j < WIDTH - 2; j++){
        out[i][j] = Operate(type, i, j, m);
      }
    }
  }

  for(int i = 0; i < HEIGHT; i++){
    for(int j = 0; j <WIDTH; j++){
      if(m[i][j] - out[i][j] > 10)
        printf("*");
      else
        printf(" ");
    }
    printf("\n");
  }

  return 0;
}
