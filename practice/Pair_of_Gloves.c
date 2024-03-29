#include<stdio.h>

int main()
{
  int a = 0;
  int n[9999] = {0};
  int i = 0;
  int sum = 0;
  while(scanf("%d", &a) != EOF){
    n[i] = a;
    i++;
  }

  int used[i];
  for(int j = 0; j < i; j++)
    used[j] = 0;
  for(int j = 0; j < i - 1; j++){
    for(int k = j + 1; k < i; k++){
      if(used[j] != 1 && used[k] != 1 && n[j] == n[k]){
        sum++;
        used[j] = 1;
        used[k] = 1;
      }
    }
  }
  printf("%d", sum);

  return 0;
}
