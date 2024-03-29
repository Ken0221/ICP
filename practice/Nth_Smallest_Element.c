#include<stdio.h>

int main()
{
  int len = 0;
  scanf("%d", &len);

  int n = 0;
  int a[len];
  for(int i = 0; i < len; i++){
    scanf("%d", &n);
    a[i] = n;
  }

  int N = 0;
  scanf("%d", &N);

  int valid = 0;
  while(valid == 0){
    valid = 1;
    for(int j = 1; j < len; j++){
      if(a[j - 1] > a[j]){
        int at = a[j - 1];
        a[j - 1] = a[j];
        a[j] = at;
        valid = 0;
      }
    }
  }

  int s = 1;
  int k = 0;
  for(int i = 1; s != N; i++){
    if(a[i] > a[i - 1]){
      k = i;
      s++;
    }
  }

  
  printf("%d", a[k]);
  return 0;
}
