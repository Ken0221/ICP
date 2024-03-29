#include <stdio.h>
 
void maximum_removal(int, int*);

int main() {
  int n;
  scanf("%d", &n);
  int a[n];
  for(int i = 0; i < n; i++)
    scanf("%d", &a[i]);
 
  maximum_removal(n, a);
 
  for(int i = 0; i < n - 1; i++)
    printf("%d ", a[i]);
  return 0;
}
 
void maximum_removal(int n, int a[]) {
  int max = a[0];
  int it = 0;
  for(int i = 0; i < n; i++){
    if(a[i] > max){
      max = a[i];
      it = i;
    }
  }
  for(int i = it; i < n - 1; i++){
    a[i] = a[i + 1];
  }
  return;
}
