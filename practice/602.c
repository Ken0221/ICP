#include<stdio.h>

int *findValue(int M[3][3][3], int option) {
  for(int i = 0; i < 3 * 3 * 3; i++){
    for(int j = i; j < 3 * 3 * 3; j++){
      if(*(&M[0][0][0] + i) > *(&M[0][0][0] + j)){
        int temp = *(&M[0][0][0] + i);
        *(&M[0][0][0] + i) = *(&M[0][0][0] + j);
        *(&M[0][0][0] + j) = temp;
      }
    }
  }
  if(option == 0){
    return &M[2][2][2];
  }
  else if(option == 1){
    return &M[0][0][0];
  }
  else if(option == 2){
    return &M[1][1][1];
  }
}
/*
int main() {
  int M[3][3][3];
  int option;
 
  scanf("%d", &option);
  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      for(int k = 0; k < 3; k++) {
        scanf("%d", &M[i][j][k]);
      }
    }
  }
 
  printf("%d", *findValue(M, option));
  return 0;
}*/
