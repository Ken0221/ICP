#include<stdio.h>
#include<string.h>

int main(){
  char a[100] = "";
  scanf("%s", a);
  char b[10][100] = {""};
  int it = 0;
  int t = 0;
  for(int i = 0; i < 100; i++){
    if(a[i] == ',' || a[i] == '\0'){
      for(int j = it, k = 0; j < i; j++, k++){
        b[t][k] = a[j];
      }
      t++;
      it = i + 1;
      if(a[i] == '\0') break;
    }
  }
  
  int valid = 1;
  for(int i = 0; i < t; i++){
    valid = 1;
    int len = strlen(b[i]);
    for(int j = 0, k = len - 1; j < len / 2; j++, k--){
      if(b[i][j] != b[i][k]){
        valid = 0;
        break;
      }
    }
    if(valid == 1)
      printf("%s\n", b[i]);
  }

  return 0;
}
