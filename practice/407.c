#include<stdio.h>

int main()
{
  int len = 0;
  scanf("%d", &len);

  int n[len];
  int in = 0;
  int valid = 0;
  int t = 0;
  while(scanf("%d", &in) != EOF){
    for(int j = 0; j < t + 1; j++){
      if(in == n[j] && t != 0)
        valid = 1;
    }
    if(valid == 0){
      n[t] = in;
      printf("%d ", n[t]);
      t++;
    }
    valid = 0;
  }

  return 0;
}
