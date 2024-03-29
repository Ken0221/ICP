#include<stdio.h>

int main()
{
  int n;
  scanf("%d", &n);

  for(int i = 0; i < n; i++){
    for(int j = 0; j < i; j++){
      printf(" ");
    }
    printf("%d", i + 1);
    int s = 2 * (n - 1) + 1 - 2 * (i + 1);
    for(int k = 0; k < s; k++){
      printf(" ");
    }
    if(i + 1 != n)
      printf("%d", i + 1);
    

    printf("\n");
  }

  for(int i = 0; i < n - 1; i++){ 
    for(int j = 0; j < n - 2 - i; j++){
      printf(" ");
    }
    printf("%d", n - i - 1);
    int t = 2 * (n - 1) + 1 - 2 * (n - i - 1);
    for(int k = 0; k < t; k++){
      printf(" ");
    }
    printf("%d", n - i - 1);

    printf("\n");
  }

  return 0;
}
