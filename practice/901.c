#include<stdio.h>

int main(){
  int n;
  scanf("%d", &n);

  int t = n;
  int s = 0;
  while(t > 0){
    if(t & 1 == 1)
      s++;
    t >>= 1;
  }

  printf("There are %d one in number %d.", s, n);
  return 0;
}
