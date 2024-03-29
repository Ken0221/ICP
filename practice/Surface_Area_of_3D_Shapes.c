#include<stdio.h>

int main()
{
  int n;
  scanf("%d", &n);
  int z_n = 0;
  int g[n][n];
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      scanf("%d", &g[i][j]);
      if(g[i][j] == 0)
        z_n++;
    }
  }

  int a = 0;
  //top bottom
  a += 2 * ((n * n) - (1 * z_n));
  
  //side
  int v = 0;
  for(int k = 1; k <= 50; k++){
    for(int i = 0; i < n; i++){
      for(int j = 0; j < n; j++){
        if(g[i][j] >= k && v == 0){
            a += 2;
            v = 1;
        }
        else if(g[i][j] < k)
          v = 0;
      }
      v = 0;
    }
  }

  v = 0;
  for(int k = 1; k < 50; k++){
    for(int j = 0; j < n; j++){
      for(int i = 0; i < n; i++){
        if(g[i][j] >= k && v == 0){
          a += 2;
          v = 1;
        }
        else if(g[i][j] < k)
          v = 0;
      }
      v = 0;
    }
  }


  printf("%d", a);

  return 0;
}
