#include<stdio.h>

void rotate(int img_in[40][40], int img_out[40][40], 
    int clockwise, int time){
  int temp[40][40];
  for(int i = 0; i < 40; i++){
    for(int j = 0; j < 40; j++){
      img_out[i][j] = img_in[i][j];
      temp[i][j] = img_in[i][j];
    }
  }
  if(clockwise == 1){
    for(int i = 0; i < time; i++){
      for(int j = 0; j < 40; j++){
        for(int k = 0; k < 40; k++){
          img_out[k][39 - j] = temp[j][k];
        }
      }
      for(int j = 0; j < 40; j++){
        for(int k = 0; k < 40; k++){
           temp[k][39 - j] = img_out[k][39 - j];
        }
      }
    }
  }
  else if(clockwise == 0){
    for(int i = 0; i < time; i++){
      for(int j = 0; j < 40; j++){
        for(int k = 0; k < 40; k++){
          img_out[39 - k][j] = temp[j][k];
        }
      }
      for(int j = 0; j < 40; j++){
        for(int k = 0; k < 40; k++){
           temp[k][39 - j] = img_out[k][39 - j];
        }
      }

    }
  }
  return;
}
/*
int main(){
 
  int original_img[40][40] = {{0}};
  int rotated_img[40][40] = {{0}};
  int clockwise, t;
 
  scanf("%d %d", &clockwise, &t);
  for(int i = 0; i < 40; i++) {
    for(int j = 0; j < 40; j++) {
      scanf("%d", &original_img[i][j]);
    }
  }
 
  rotate(original_img, rotated_img, clockwise, t);
 
  for(int i = 0; i < 40; i++) {
    for(int j = 0; j < 40; j++) {
      if(rotated_img[i][j] == 0)
        printf(" ");
      else if(rotated_img[i][j] == 1)
        printf("■");
    }
    printf("\n");
  }
  return 0;
}
*/
