#include<stdio.h>
 
int main() {
  int n = 0;
  scanf("%d", &n);
 
  for(int i = 0; i < n; i++){
    char a[100];
    scanf("%s", a);
    if(i == 0){
      if(97 <= a[0] && a[0] <= 122) {
        a[0] -= 32;
        printf("%s ", a);
      }
      else
        printf("%s ", a);
    }
    else if(i == n - 1){
      for(int j = 0; j < 100; j++){
        if(a[j] == '\0'){
          if(a[j - 1] == '.')
            printf("%s", a);
          else
            printf("%s.", a);
          break;
        }
      }
    }
    else
      printf("%s ", a);
  }
  return 0;
}
