#include<stdio.h>

int main()
{
  int t_n, su_n, c_n, st_n;
  scanf("%d %d %d %d", &t_n, &su_n, &c_n, &st_n);
  int n[t_n][su_n][c_n][st_n];
  for(int i = 0; i < t_n; i++){
    for(int j = 0; j < su_n; j++){
      for(int k = 0; k < c_n; k++){
        for(int l = 0; l < st_n; l++){
          scanf("%d", &n[i][j][k][l]);
        }
      }
    }
  }
  int a, b, c, d;
  scanf("%d %d %d %d", &a, &b, &c, &d);

  int ave_su_t = 0;
  for(int i = 0; i < c_n; i++){
    for(int j = 0; j < st_n; j++){
      ave_su_t += n[a - 1][b - 1][i][j];
    }
  }
  ave_su_t /= (c_n * st_n);

  int ave_c_st_t = 0;
  for(int i = 0; i < su_n; i++){
    ave_c_st_t += n[a - 1][i][c - 1][d - 1];
  }
  ave_c_st_t /= su_n;

  int ave_c_t = 0;
  for(int i = 0; i < su_n; i++){
    for(int j = 0; j < st_n; j++){
      ave_c_t += n[a - 1][i][c - 1][j];
    }
  }
  ave_c_t /= (su_n * st_n);

  printf("The average score of subject_%d test_%d is: %d\n", b, a, ave_su_t);
  printf("The average score of class_%d student_%d's test_%d is: %d\n", c, d, a, ave_c_st_t);
  printf("The average score of class_%d in test_%d is: %d\n", c, a, ave_c_t);
}
