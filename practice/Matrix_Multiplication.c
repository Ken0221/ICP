#include<stdio.h>

int main()
{
  int a[10][10] = {{0}};
  int b[10][10] = {{0}};
  int c[10][10] = {{0}};

  for(int i = 0; i < 10; i++){
    for(int j = 0; j< 10; j++){
      scanf("%d", &a[i][j]);
    }
  }
  for(int i = 0; i < 10; i++){
    for(int j = 0; j< 10; j++){
      scanf("%d", &b[i][j]);
    }
  }
  for(int i = 0; i < 10; i++){
    for(int j = 0; j < 10; j++){
      for(int k = 0; k < 10; k++){
        c[i][j] += a[i][k] * b[k][j];
      }
    }
  }


  for(int i = 0; i < 10; i++){
    for(int j = 0; j< 10; j++){
      printf("%d ", c[i][j]);
      if(j == 9)
        printf("\n");
    }
  }

  return 0;
}
