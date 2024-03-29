#include<stdio.h>

int main()
{
  int y, x;
  scanf("%d %d", &y, &x);
  int m[10][10];
  for(int i = 0; i < 10; i++){
    for(int j = 0; j < 10; j++){
      scanf("%d", &m[i][j]);
    }
  }
  int p[100];
  int o = 0;
  while(scanf("%d", &p[o]) != EOF){
    if(p[o] == 2 && m[x + 1][y] == 0)
      x++;
    if(p[o] == 4 && m[x][y - 1] == 0)
      y--;
    if(p[o] == 6 && m[x][y + 1] == 0)
      y++;
    if(p[o] == 8 && m[x - 1][y] == 0)
      x--;
    
    for(int i = 0; i < 10; i++){
      for(int j = 0; j < 10; j++){
        if(i == x && j == y)
          printf("* ");
        else
          printf("%d ", m[i][j]);
        if(j == 9)
          printf("\n");
      }
    }
    printf("\n");
    o++;
  }
return 0;
}
