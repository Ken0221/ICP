#include<stdio.h>

int main()
{
  int m, n;
  scanf("%d %d", &m, &n);
  int p[m][n];
  p[0][0] = 1;

  for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
      if(i == 0 && j == 0)
        continue;
      else if(i == 0)
        p[i][j] = p[i][j - 1];
      else if(j == 0)
        p[i][j] = p[i - 1][j];
      else
        p[i][j] = p[i - 1][j] + p[i][j - 1];
    }
  }

  printf("%d", p[m - 1][n - 1]);
  return 0;
}
