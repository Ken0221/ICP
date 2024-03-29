#include<stdio.h>
#define SIZE 10

void sort_int(int a) {
  int t = 1, n = 0;
  int at = a;
  while(at > 0) {
    at /= 10;
    if(at > 0)
      t *= 10;
    n++;
  }
  int b[n];
  for(int i = 0; i < n; i++){
    b[i] = a / t;
    a %= t;
    t /= 10;
  }
  for(int i = 0; i < n; i++) {
    for(int j = i + 1; j < n; j++) {
      if(b[i] > b[j]) {
        int bt = b[i];
        b[i] = b[j];
        b[j] = bt;
      }
    }
  }
  for(int i = 0; i < n; i++) {
    if(b[i] != 0){
      printf("%d", b[i]);
    }
  }
  if(n == 0)
    printf("0");
  printf("\n");
}

void sort_float(float a) {
  int at = a;
  float a_d = a - at;
  int t = 1, n = 0;
  while(at > 0) {
    at /= 10;
    if(at > 0)
      t *= 10;
    n++;
  }
  int b[n];
  int s = 1;
  at = a;
  for(int i = 0; i < n; i++){
    b[i] = at / t;
    at %= t;
    t /= 10;
    if(b[i] != 0)
      s *= 10;
  }
  s /= 10;
  for(int i = 0; i < n; i++) {
    for(int j = i + 1; j < n; j++) {
      if(b[i] > b[j]) {
        int bt = b[i];
        b[i] = b[j];
        b[j] = bt;
      }
    }
  }
  a = 0;
  for(int i = 0; i < n; i++) {
    if(b[i] != 0){
      a += b[i] * s;
      s /= 10;
    }
  }
  printf("%.3f", a + a_d);
  printf("\n");

}

void sort_double(double a) {
  int at = a;
  double a_d = a - at;
  int t = 1, n = 0;
  while(at > 0) {
    at /= 10;
    t *= 10;
    n++;
  }
  t /= 10;
  int b[n];
  int s = 1;
  at = a;
  for(int i = 0; i < n; i++){
    b[i] = at / t;
    at %= t;
    t /= 10;
    if(b[i] != 0)
      s *= 10;
  }
  s /= 10;
  for(int i = 0; i < n; i++) {
    for(int j = i + 1; j < n; j++) {
      if(b[i] > b[j]) {
        int bt = b[i];
        b[i] = b[j];
        b[j] = bt;
      }
    }
  }
  a = 0;
  for(int i = 0; i < n; i++) {
    if(b[i] != 0){
      a += b[i] * s;
      s /= 10;
    }
  }
  printf("%.3lf", a + a_d);
  printf("\n");
}

void sort_void(void) {
  printf("Nothing to be sorted!\n"); 
}

void sort_array(int a[SIZE], int n) {
  for(int i = 0; i < SIZE; i++) {
    for(int j = i; j < SIZE; j++) {
      if(a[i] > a[j]) {
        int at = a[i];
        a[i] = a[j];
        a[j] = at;
      }
    }
  }
  for(int i = 0; i < SIZE; i++)
    printf("%d ", a[i]);
}
/*
int main() {
  int a = 0;
  float b = 0;
  double c = 0;
  int arr[SIZE] = {0};
  scanf("%d%f%lf", &a, &b, &c);
  for (int i = 0; i < SIZE; i++) {
    scanf("%d", &arr[i]);
  }
  sort_int(a);
  sort_float(b);
  sort_double(c);
  sort_void();
  sort_array(arr, SIZE);
  return 0;
}*/
