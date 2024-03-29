#include<stdio.h>

int main(){
  int n;
  scanf("%d", &n);

  int k;
  scanf("%d", &k);

  int a[100];
  int nt= n;
  int r = 0;
  for(int i = 0; a[i] < n;i++){
    if(i > 0){
      k += 10;
      a[i] = k + 10;
    }
    else
      a[i] = k;
    r++;
  }
  int c = 0;
  for(int i = 0; i < r; i++){
    for(int j = 0; j < r; j++){
      if(a[i] + a[j] == n)
        c = 2;
      for(int k = 0; k < r; k++){
        if(a[i] + a[j] + a[k] == n)
          c = 3;
      }
    }
  }
  if(c != 0)
    printf("%d", c);
  else
    printf("-1");

  return 0;
}
