#include<stdio.h>

int main()
{
  int m[10][10];
  for(int i = 0; i < 10; i++){
    for(int j = 0; j <10; j++){
      scanf("%d", &m[i][j]);
    }
  }

  int bm[10][10] = {{0}};
  for(int i = 0; i < 10; i++){
    for(int j = 0; j < 10; j++){
      int b = 0;
      if(m[i][j] == -1)
        b = -1;
      else if(i >= 1 && i < 9 && j >= 1 && j < 9){
        for(int k = i - 1; k < i + 2; k++){
          for(int l = j - 1; l < j + 2; l++){
            if(m[k][l] == -1)
              b++;
          }
        }
      }
      else if(i == 0 && j != 0 && j != 9){
        for(int k = i; k < i + 2; k++){
          for(int l = j - 1; l < j + 2; l++){
            if(m[k][l] == -1)
              b++;
          }
        }
      }
      else if(j == 0 && i != 0 && i != 9){
        for(int k = i - 1; k < i + 2; k++){
          for(int l = j; l < j + 2; l++){
            if(m[k][l] == -1)
              b++;
          }
        }
      }
     else if(i == 9 && j != 0 && j != 9){
        for(int k = i - 1; k < i + 1; k++){
          for(int l = j - 1; l < j + 2; l++){
            if(m[k][l] == -1)
              b++;
          }
        }
      }
      else if(j == 9 && i != 0 && i != 9){
        for(int k = i - 1; k < i + 2; k++){
          for(int l = j - 1; l < j + 1; l++){
            if(m[k][l] == -1)
              b++;
          }
        }
      }

      else if(i == 0 && j == 0){
        for(int k = i; k < i + 2; k++){
          for(int l = j; l < j + 2; l++){
            if(m[k][l] == -1)
              b++;
          }
        }
      }
      else if(i == 0 && j == 9){
        for(int k = i; k < i + 2; k++){
          for(int l = j - 1; l < j + 1; l++){
            if(m[k][l] == -1)
              b++;
          }
        }
      }
      else if(i == 9 && j == 0){
        for(int k = i - 1; k < i + 1; k++){
          for(int l = j; l < j + 2; l++){
            if(m[k][l] == -1)
              b++;
          }
        }
      }
      else if(i == 9 && j == 9){
        for(int k = i - 1; k < i + 1; k++){
          for(int l = j - 1; l < j + 1; l++){
            if(m[k][l] == -1)
              b++;
          }
        }
      }
      bm[i][j] = b;
      b = 0;
    }
  }

  for(int i = 0; i < 10; i++){
    for(int j = 0; j < 10; j++){
      printf("%2d ", bm[i][j]);
    }
    printf("\n");
  }

  return 0;
}
