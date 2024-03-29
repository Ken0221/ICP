#include<stdio.h>

int main()
{
  int h, n;
  scanf("%d %d", &h, &n);

  while(n > 0)
  {
    int t = 0;
    for(int i = 1; i <= h; i++){
      for(int j = 1; j <= i; j++){
        printf("%d", i);
        if(j == i)
          printf("\n");
      }
      t++;
    }
    for(int i = t - 1; i > 0; i--){
      for(int j = 1; j <= i; j++){
        printf("%d", i);
        if(j == i)
          printf("\n");
      }
    }


    n--;
//    if(n != 0)
      printf("\n");
  }

  return 0;
}
