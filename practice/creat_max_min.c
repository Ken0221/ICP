#include<stdio.h>

int main()
{
  int n;
  scanf("%d\n", &n);

  int a[n];
  for(int i = 0; i < n; i++){
    scanf("%d", &a[i]);
  }
  for(int i = 0; i < n - 1; i++){
    if(a[i] > a[i + 1]){
      int a_temp = a[i];
      a[i] = a[i + 1];
      a[i + 1] = a_temp;
    }
  }
  int max = a[n - 1];

  for(int i = 0; i < n - 1; i++){
    if(a[i] < a[i + 1]){
      int a_temp = a[i];
      a[i] = a[i + 1];
      a[i + 1] = a_temp;
    }
  }
  int min = a[n - 1];

  printf("max sequence:");
  for(int i = 0; i < n; i++){
    printf(" %d", max);
  }

  printf("\nmin sequence:");
  for(int i = 0; i < n; i++){
    printf(" %d", min);
  }

  return 0 ;
}
