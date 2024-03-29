#include<stdio.h>

void Operate(int a, int sort[10]){
  for(int i = 0; i < 10; i++){
    if(a < sort[i]){
      for(int j = 9; j > i; j--){
        sort[j] = sort[j - 1];
      }
      sort[i] = a;
      break;
    }
  }
  return;
}

int main()
{
  int n[10] = {0};
  for(int i = 0; i < 10; i++){
    scanf("%d", &n[i]);
    Operate(n[i], n);
    for(int j = 0; j <= i; j++){
      printf("%d", n[j]);
      if(j != i)
        printf(" ");
    }
    printf("\n");
  }
  return 0;
}
