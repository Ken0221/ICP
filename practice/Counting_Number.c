#include<stdio.h>

int main()
{
  int a[20];
  for(int i = 0; i < 20; i++){
    scanf("%d", &a[i]);
  }
  
  int s = 0;
  int r = 0;
  while(r != 1){
    for(int i = 0; i < 19; i++){
      if(a[i + 1] < a[i]){
        int at = a[i];
        a[i] = a[i + 1];
        a[i + 1] = at;
        s++;
      } 
    }
    if(s == 0)
      r = 1;
    else
      s = 0;
  }
  
  int n[20];
  n[0] = a[0];
  int k = 1;
  int t = 0;
  for(int i = 1; i < 20; i++){
    if(a[i] != a[i - 1]){
      printf("%d : %d times\n", n[t], k);
      t = i;
      n[t] = a[i];
      k = 1;
    }
    else{
      k++;
    }
    if(i == 19){
      if(a[i] == a[i - 1]){
        printf("%d : %d times\n", n[t], k);
      }
      else{
        k = 1;
        printf("%d : %d times\n", a[19], k);
      }
    }
  }

  return 0;
}
