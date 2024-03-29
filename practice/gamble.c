#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
  int coin;
  scanf("%d", &coin);
  
  srand(time(NULL));

  int a, b, c;
  a = rand() % 10;
  b = rand() % 10;
  c = rand() % 10;

  int sum = 0;
  if(a == 7)
    sum++;

  if(b == 7)
    sum++;

  if(c == 7)
    sum++;

  int r;
  switch(sum){
    case 0:
      r = 0;
      break;
    case 1:
      r = 100;
      break;
    case 2:
      r = 500;
      break;
    case 3:
      r = 2000;
      break;
  }
  
  printf("%d", r * coin);

  return 0 ;
}
