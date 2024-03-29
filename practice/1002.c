#include<stdio.h>

void Step(int m[5][5], int i, int j){
  int s = 0;
  m[i][j] = 2;
  if(i >= 0 && i < 5 && j >= 0 && j < 5){
    if(j >= 1 && m[i][j - 1] != -1){
      if(m[i][j - 1] == 0)
        Step(m, i, j - 1);
      s++;
    }
    if(i + 1 < 5 && m[i + 1][j] != -1){
      if(m[i + 1][j] == 0)
        Step(m, i + 1, j);
      s++;
    }
    if(j + 1 < 5 && m[i][j + 1] != -1){
      if(m[i][j + 1] == 0)
        Step(m, i, j + 1);
      s++;
    }
    if(i >= 1 && m[i - 1][j] != -1){
      if(m[i - 1][j] == 0)
        Step(m, i - 1, j);
      s++;
    }
    if(s == 0 || (s == 1 && i != 0 && i != 4 && j != 0 && j != 4))
      m[i][j] = 1;
  }
  return;
}

int main(){
  int x, y;
  scanf("%d %d", &x, &y);
  int m[5][5];
  for(int i = 0; i < 5; i++){
    for(int j = 0; j < 5; j++)
      scanf("%d", &m[i][j]);
  }
  Step(m, x, y);
  for(int i = 0; i < 5; i++){
    for(int j = 0; j < 5; j++){
      if(m[i][j] == -1)
        printf("*");
      if(m[i][j] == 2 || m[i][j] == 0)
        printf(" ");
      if(m[i][j] == 1)
        printf("x");
    }
    printf("\n");
  }
  return 0;
}
