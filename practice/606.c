#include <stdio.h>
#define MAX 100
 
void sort(int *arr, int n) {
  int t = 0;
  while(scanf("%d", (arr + t)) != EOF){
    t++;
  }
  for(int i = 0; i < t; i++){
    for(int j = i; j < t; j++){
      if(arr[i] > arr[j]){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
  for(int i = 0; i < t; i++){
    printf("%d ", arr[i]);
  }
}
 
int main() {
  int arr[MAX];
  sort(&arr[0], MAX);
  return 0;
}
