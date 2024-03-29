#include<stdio.h>
#include<stdbool.h>
#define SIZE 300

bool is_cyclic(int n){
  while(n % 2 == 0){
    n /= 2;
  }
  while(n % 5 == 0){
    n /= 5;
  }
  if(n != 1)
    return true;
  else
    return false;
}
void repeating(int n){
  int a[SIZE];
  int t = 1;
  int k = 0;
  for(int i = 0; i < SIZE; i++){
    a[i] = t / n;
    if(t / n != 0)
      t -= (n * a[i]);
    t *= 10;
    if(k == 0)
      i--;
    k++;
  } 
  int r = 1;
  for(int i = 0; i < SIZE; i++){
    for(int j = i + 1; j < SIZE; j++){
      int len = j - i;
      if(a[i] == a[j]){
        r = 0;
        for(int n = 1; n < SIZE - j; n++){
          if(a[i + n] != a[j + n]){
            r = 1;  
          }
        }
        if(r == 0){
        for(int k = i; k < j; k++)
          printf("%d", a[k]);
        printf("\nThe repeating length is %d.", len);
        break;
        }
      }
    }
    if(r == 0)
      break;
  }
}
bool is_prime(int n){
  int s = 0;
  for(int i = 1; i < n; i++){
    if(n % i == 0)
      s++;
  }
  (s == 2)? true : false;
}
void prime_factor(int n){
  printf("Not cyclic decimal.\n");
  int nt = n;
  for(int i = 2; i <= nt; i++){
    if(is_prime(i)){
      while(n % i == 0){
        printf("%d ", i);
        n /= i;
      }
    }
    else
      continue;
  }
}
/*
int main() {
  int number;
  scanf("%d", &number);
 
  if (is_cyclic(number))
    repeating(number);
  else
    prime_factor(number);
  return 0;
}*/
