#include<stdio.h>

int main()
{
  int y1, m1, d1, y2, m2, d2;
  scanf("%d %d %d %d %d %d", &y1, &m1, &d1, &y2, &m2, &d2);

  int y = y2 - y1 - 1;
  int t = 0;
  if(y > 0)
    t += (365 * y);//計算完整的365天/年

  int k;
  if(y1 == y2){//同年時
    int m2t = m2 - 1;//減去不完整月
    for(m2t; m2t > m1; m2t--){//加上完整月 不同月份不同天數
      if(m2t != 2 && m2t != 4 && m2t != 6 && m2t != 9 && m2t != 11)
        k = 31;
      else if(m2t == 2)
        k = 28;
      else
        k = 30;
      t += k;
    }
    if(m1 == m2){//同月時
      t += (d2 - d1 + 1);
    }
    else{//不同月
      t += d2;//後月直接加日期
      if(m1 != 2 && m1 != 4 && m1 != 6 && m1 != 9 && m1 != 11)
        k = 31;
      else if(m1 == 2)
        k = 28;
      else
        k = 30;
      t += (k - d1 + 1);//前月 該月天數-日期+1
    }
  }
  else{//不同年
    int m2t = m2 - 1;
    for(m2t; m2t > 0; m2t--){
      if(m2t != 2 && m2t != 4 && m2t != 6 && m2t != 9 && m2t != 11)
        k = 31;
      else if(m2t == 2)
        k = 28;
      else
        k = 30;
      t += k;
    }
    int m1t = m1 + 1;
    for(m1t; m1t <= 12; m1t++){
      if(m1t != 2 && m1t != 4 && m1t != 6 && m1t != 9 && m1t != 11)
        k = 31;
      else if(m1t == 2)
        k = 28;
      else
        k = 30;
      t += k;
    }

    int d2t = d2;
    for(d2t; d2t > 0; d2t--){
      t++;
    }
    int d1t = d1;
    if(m1 != 2 && m1 != 4 && m1 != 6 && m1 != 9 && m1 != 11)
      k = 31;
    else if(m1 == 2)
      k = 28;
    else
      k = 30;
    for(d1t; d1t <= k; d1t++){
      t++;
    }
  }
  

  int y2t = y2 - 1;
  for(y2t; y2t > y1; y2t--){
    if(y2t % 4 == 0 && (y2t % 100 != 0 || y2t % 400 == 0))
      t ++;
  }
  int p = 0, q = 0;
  if(m1 <= 2 && (y1 % 4 == 0 && (y1 % 100 != 0 || y1 % 400 == 0))){
    t ++;
    p = 1;
  }
  if((m2 > 2 || (m2 == 2 && d2 ==29)) && (y2 % 4 == 0 && (y2 % 100 != 0 || y2 % 400 == 0))){
    t ++;
    q = 1;
  }
  if(p == 1 && q == 1 && y1 == y2)
    t--;

  printf("%d", t);
  return 0;
}
