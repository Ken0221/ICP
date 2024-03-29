#include<stdio.h>

int main()
{
  int table[5][5];
  for(int i = 0; i < 5; i++){
    for(int j = 0; j < 5; j++){
      scanf("%d", &table[i][j]);
    }
  }
  int n;
  scanf("%d", &n);
  int nu[n];
  for(int i = 0; i < n; i++){
    scanf("%d", &nu[i]);
  }
  int valid[5][5] = {{0}};
  for(int i = 0; i < 5; i++){
    for(int j = 0; j < 5; j++){
      for(int k = 0; k < n; k++){
        if(nu[k] == table[i][j])
          valid[i][j] = 1;
      }
    }
  }
  int r_r = 1, r_c = 1, r_s = 1;
  int sum = 0;
  for(int i = 0; i < 5; i++){
    if(valid[i][i] != 1)
      r_s = 0;
    for(int j = 0; j < 5; j++){
      if(valid[i][j] != 1)
        r_r = 0;
      if(valid[j][i] != 1)
        r_c = 0;
    }
    if(r_r == 1)
      sum++;
    if(r_c == 1)
      sum++;
    r_r = 1;
    r_c = 1;
  }
  if(r_s == 1)
    sum++;
  r_s = 1;

  for(int i = 0; i < 5; i++){
    if(valid[i][4 - i] != 1)
      r_s = 0;
  }
  if(r_s == 1)
    sum++;
 
  printf("%d", sum);
  return 0;
}
