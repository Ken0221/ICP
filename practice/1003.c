#include<stdio.h>
#include<stdbool.h>

int Step(int t, int n, int s){
  if(n == t)
    s++;
  if(n < t){
    n++;
    s = Step(t, n, s);
  }
  if(n < t){
    n++;
    s = Step(t, n, s);
  }
  return s;
}

int main(){
  int n;
  scanf("%d", &n);
  printf("%d", Step(n, 0, 0));
  return 0;
}
