#include<stdio.h>

int main()
{
  int a[20][20];
  int n;
  scanf("%d", &n);

  a[0][0] = 1;
  for(int i = 0; i < n; i++){
    for(int j = 0; j <= i; j++){
      if(j == 0 || j == i)
        a[i][j] = 1;
      else
        a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
      printf("%d", a[i][j]);
      if(j != i)
        printf(" ");
    }
    printf("\n");
  }
  return 0;
}
