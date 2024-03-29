#include<stdio.h>

int Permutation(int n, int k){
  if(n - 1 > n - k){
    n *= Permutation(n - 1, k - 1);
  }
  return n;
}

int Combination(int n, int k){
  return (Permutation(n, k) / Permutation(k, k));
}

int main(){
  int n, k;
  scanf("%d %d", &n, &k);
  printf("%d\n", Permutation(n, k));
  printf("%d", Combination(n, k));
  return 0;
}
