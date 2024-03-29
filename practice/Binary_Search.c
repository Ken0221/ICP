#include<stdio.h>

int main()
{
  int target = 0;
  scanf("%d", &target);
  int a = 0;
  int data[100] = {0};
  int l = 0;
  while(scanf("%d", &a) != EOF){
    data[l] = a;
    l++;
  }

  for(int j = 0; j < l - 1; j++){
    for(int i = 0; i < l - 1; i++){
      if(data[i] >= data[i + 1]){
        int dt = data[i];
        data[i] = data[i + 1];
        data[i + 1] = dt;
      }
    }
  }

  int valid = 1;
  for(int j = 0; j < l; j++){
    if(data[j] == target){
      for(int k = j; k < l - 1; k++){
        data[k] = data[k + 1];
      }
      for(int k = 0; k < l - 1; k++){
        printf("%d", data[k]);
        if(k == l - 2)
          printf("\n%d has been deleted.", target);
        else
          printf(" ");
      }
      valid = 0;
      break;
    }
  }
  if(valid == 1)
    printf("%d has not been found.", target);

  return 0;
}
