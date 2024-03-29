#include<stdio.h>
#include<math.h>

int main()
{
  int n;
  scanf("%d", &n);
  
  int k = 1;
  if(n >= 10 && n < 100) k = 2;
  else if(n >= 100 && n < 1000) k = 3;
  else if(n >= 1000 && n < 10000) k = 4;
  else if(n >= 10000 && n < 100000) k = 5;

  int a[k];
  int m;
  for(int i = 0 ; i < k ; i++)
  {
    m = pow(10, k - i - 1);
    a[k - i - 1] = n / m;
    n = n % m;
  }

  for(int i = 0 ; i < k ; i++)
  {
    printf("%d", a[i]);
  }

  return 0;
}
