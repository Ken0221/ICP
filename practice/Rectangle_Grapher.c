#include<stdio.h>

int main()
{
  int x1, y1, x2, y2;
  scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

  int px1, px2, py1, py2;
  px1 = 26 + x1 - 1;
  px2 = 26 + x2 - 1;
  py1 = 26 - y1 - 1;
  py2 = 26 - y2 - 1;

  for(int i = 0; i < 51; i++){
    if(i != 25){
      for(int j = 0; j < 51; j++){
        if(j == 25){
          if((px1 <= j && px2 >= j) && (py1 == i || py2 == i)){
            printf("-"); 
          }
          else if((px1 == j || px2 == j) && (py1 > i && py2 < i)){
            printf("|");
          }
          else{
            printf("|");
          }
        }
        else{
          if((px1 <= j && px2 >= j) && (py1 == i || py2 == i)){
            printf("-");
          }
          else if((px1 == j || px2 == j) && (py1 > i && py2 < i)){
            printf("|");
          }
          else{
            printf(" ");
          }
        }
        if(j == 50)
          printf("\n");
      }
    }
    if(i == 25){
      for(int j = 0; j < 51; j++){
        if((px1 <= j && px2 >= j) && (py1 == i || py2 == i) && j != 25){
          printf("-");
        }
        else if((px1 == j || px2 == j) && (py1 > i && py2 < i) && j != 25){
          printf("|");
        }
        else if(j == 25){
          printf("o");
        }
        else{
          printf("-");
        }
        if(j == 50)
          printf("\n");
      }
    }
  }
  return 0;
}
