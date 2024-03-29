#include<stdio.h>

int  main()
{
  int m[5][5] = {{0}};
  for(int i = 0; i < 5; i++){
    for(int j = 0; j < 5; j++)
      scanf("%d", &m[i][j]);
  }

  int mt = m[0][0];
  for(int j = 0; j < 4; j++)
    m[j][0] = m[j + 1][0];
  for(int i = 0; i < 4; i++)
    m[4][i] = m[4][i + 1];
  for(int j = 4; j > 0; j--)
    m[j][4] = m[j - 1][4];
  for(int i = 4; i > 0; i--)
    m[0][i] = m[0][i - 1];
  m[0][1] = mt;

  mt = m[1][1];
  for(int j = 1; j < 3; j++)
    m[j][1] = m[j + 1][1];
  for(int i = 1; i < 3; i++)
    m[3][i] = m[3][i + 1];
  for(int j = 3; j > 1; j--)
    m[j][3] = m[j - 1][3];
  for(int i = 3; i > 1; i--)
    m[1][i] = m[1][i - 1];
  m[1][2] = mt;

  for(int i = 0; i < 5; i++){
    for(int j = 0; j < 5; j++){
      printf("%4d", m[i][j]);
      if(j == 4)
        printf("\n");
    }
  }
  return 0;
}
