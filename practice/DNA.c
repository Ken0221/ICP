#include<stdio.h>

int main(){
  char a[100] = "";
  char b[100] = "";
  scanf("%s", a);
  getchar();
  scanf("%s", b);
  int n;
  getchar();
  scanf("%d", &n);

  int s = 0;
  int jt;
  for(int i = 0; i < 100; i++){
    s = 0;
    for(int j = i, k = i + 1; j >= 0, k < 100; j--, k++){
      if(a[j] == b[k]){
        if(j == i)
          jt = j;
        s++;
      }
      else
        break;
    }
    if(s == n / 2){
      printf("The DNA:\n");
      for(int j = 0; j < 100; j++)
        printf("%c", a[j]);
      printf("\n");
      for(int j = 0; j < 100; j++)
        printf("%c", b[j]);
      printf("\n\nPalindromes of length is %d\n", n);

      printf("\nPalindromes at position %d\n", jt - ((n / 2) - 1));
      for(int j = jt - ((n / 2) - 1); j <= jt + (n / 2); j++)
        printf("%c", a[j]);
      printf("\n");
      for(int j = jt - ((n / 2) - 1); j <= jt + (n / 2); j++)
        printf("%c", b[j]);
      printf("\n\n=================");
      break;
    }
  }
  return 0;
}
