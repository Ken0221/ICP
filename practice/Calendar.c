#include<stdio.h>

int main()
{
  int y, mth, d, h, m, s;
  scanf("%d %d %d %d %d %d", &y, &mth, &d, &h, &m, &s);

  int k;
  scanf("%d", &k);

  s += k;
  while(s >= 60){
    s -= 60;
    m++;
  }
  while(m >= 60){
    m -= 60;
    h++;
  }
  while(h >= 24){
    h -= 24;
    d++;
  }
  int p = 0;
  if((y % 4 == 0) && (y % 100 != 0 || y % 400 == 0)){
    p = 1;
  }
  int dm;
  switch(mth){
    case 1:
      dm = 31;
      break;

    case 2:
      if(p == 1)
        dm = 29;
      else
        dm = 28;
      break;

    case 3:
      dm = 31;
      break;

    case 4:
      dm = 30;
      break;

    case 5:
      dm = 31;
      break;

    case 6:
      dm = 30;
      break;

    case 7:
      dm = 31;
      break;

    case 8 :
      dm = 31;
      break;

    case 9:
      dm = 30;
      break;

    case 10:
      dm = 31;
      break;

    case 11:
      dm = 30;
      break;

    case 12:
      dm = 31;
      break;
  }

  while(d >= dm){
    switch(mth){
    case 1:
      d -= 31;
      m++;
      if(p == 1)
        dm = 29;
      else
        dm = 28;
      break;

    case 2:
      if(p == 1)
        d -= 29;
      else
        d -= 28;
      m++;
      dm = 31;
      break;

    case 3:
      d -= 31;
      m++;
      dm = 30;
      break;

    case 4:
      d -= 30;
      m++;
      dm = 31;
      break;

    case 5:
      d -= 31;
      m++;
      dm = 30;
      break;

    case 6:
      d -= 30;
      m++;
      dm = 31;
      break;

    case 7:
      d -= 31;
      m++;
      dm = 31;
      break;

    case 8 :
      d -= 31;
      m++;
      dm = 30;
      break;

    case 9:
      d -= 30;
      m++;
      dm = 31;
      break;

    case 10:
      d -= 31;
      m++;
      dm = 30;
      break;

    case 11:
      d -= 30;
      m++;
      dm = 31;
      break;

    case 12:
      d -= 31;
      m++;
      dm = 31;
      break;
    }
  }
  while(mth >= 12){
    mth -= 12;
    y++;
  }
  printf("%02d/%02d/%02d %02d:%02d:%02d", y, mth, d, h, m, s);

  return 0;
}
