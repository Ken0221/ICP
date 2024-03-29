#include<stdio.h>

int main()
{
  int an;
  scanf("%d", &an);

  int n;
  int t = 0;
  int i = 0;
  int a[100];
  while(scanf("%d", &n) != EOF){
    a[i] = n;
    i++;
  }
  i--;
  int j = 0;
  while(j <= i){
    t++;
    if(a[j] > an)
      printf("Too high! please lower the number.\n");
    else if(a[j] < an)
      printf("Too low! please higher the number.\n");
    else
      printf("Correct! You got it in %d attempts!\n", t);
    j++;
  }

  return 0;
}
