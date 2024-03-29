#include<stdio.h>

int main()
{
  int row = 0;
  int col = 0;
  scanf("%d %d", &row, &col);

  int a[row][col];
  for(int i = 0; i < row; i++){
    for(int j = 0; j < col; j++){
      scanf("%d", &a[i][j]);
    }
  }

  int t = 0;
  for(int i = 0; i < row - 1; i++){
    for(int j = 0; j < col - 1; j++){
      if(a[i][j] != a[i + 1][j + 1]){
        t = 1;
      }
    }
  }
  if(t == 0)
    printf("It's a Toeplitz matrix!");
  else
    printf("It's not a Toeplitz matrix!");

  return 0;
}
