#include<stdio.h>

int main()
{
  int time, fee;
  scanf("%d", &time);

  if(time >= 0 && time <= 30) printf("0");
  else if(time > 30 && time <= 720)
  {
    int k;
    k = time / 30;
    if(time % 30 == 0) k -= 1;
    fee = 15 * k;
    if(fee > 240) fee = 240;
    printf("%d", fee);
  }
  else printf("error");

  return 0;
}
