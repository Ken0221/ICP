#include<stdio.h>
int main()
{
  int n[10];
  for(int i = 0;i < 10; i++){
    scanf("%d", &n[i]);
  }

  for(int i = 10; i > 0; i--){
    for(int j = 0; j < 10; j++){
      if(n[j] >= i)
        printf("*");
      else
        printf(" ");
      if(j != 9)
        printf(" ");
    }
    printf("\n");
  }

  return 0;
}
