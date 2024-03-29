#include<stdio.h>

int main()
{
  int n;
  scanf("%d", &n);

  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);

  int n1 = 1, n2  = 1, n3 = 1;
  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= n; j++){
      for(int k = 1; k <= n; k++){
        if((i * a == j * b) && (j * b ==  k * c) && (i + j + k == n)){
          n1 = i;
          n2 = j;
          n3 = k;
        }
      }
    }
  }

  printf("Employee A: %d\n", n1);
  printf("Employee B: %d\n", n2);
  printf("Employee C: %d", n3);

  return 0;
}
