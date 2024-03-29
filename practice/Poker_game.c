#include<stdio.h>

int main()
{
  int s1[5], v1[5];
  scanf("%d %d %d %d %d %d %d %d %d %d", &s1[0], &v1[0], &s1[1], &v1[1], &s1[2], &v1[2], &s1[3], &v1[3], &s1[4], &v1[4]);

  int s2[5], v2[5];
  scanf("%d %d %d %d %d %d %d %d %d %d", &s2[0], &v2[0], &s2[1], &v2[1], &s2[2], &v2[2], &s2[3], &v2[3], &s2[4], &v2[4]);

  //A按大小排
  int r = 0;
  int t = 0;
  while(r != 1){
    for(int i = 0; i < 4; i++){
      if(v1[i + 1] < v1[i]){
        int vt = v1[i + 1];
        int st = s1[i + 1];
        v1[i + 1] = v1[i];
        s1[i + 1] = s1[i];
        v1[i] = vt;
        s1[i] = st;
        t++;
      }
    }
    if(t == 0)
      r = 1;
    else
      t = 0;
  }

  //B按大小排
  r = 0;
  t = 0;
  while(r != 1){
    for(int i = 0; i < 4; i++){
      if(v2[i + 1] < v2[i]){
        int vt = v2[i + 1];
        int st = s2[i + 1];
        v2[i + 1] = v2[i];
        s2[i + 1] = s2[i];
        v2[i] = vt;
        s2[i] = st;
        t++;
      }
    }
    if(t == 0)
      r = 1;
    else
      t = 0;
  }

  //A最多幾張一樣(same_1) 且若最多兩張一樣 有無twopei(tp_1 = 0 or 1) 且有無葫蘆(fh_1 == 0 or 1)
  int n1[5] = {0, 0, 0, 0, 0};
  int p = 1;
  int k = 1;
  int same_1;
  int tp = 0;
  int fh_1 = 0;
  for(int i = 0; i < 4; i++){
    if(v1[i] != v1[i + 1]){
      if(k >= n1[p - 1]){
        n1[p] = k;
        same_1 = k;
        if(same_1 == 2)
          tp++;
      }
      p++;
      k = 1;
    }
    else{
      k++;
    }
    if(i == 3){
      if(k > n1[p - 1]){
        same_1 = k;
      }
      if((k == 2 && n1[p - 1] == 3) || (k == 3 && n1[p - 1] == 2))
        fh_1 = 1;
    }
  }
  int tp_1 = 0;
  if(same_1 == 2 && tp == 2)
    tp_1 = 1;


  //B最多幾張一樣(same_2) 且若最多兩張一樣 是否有twopei(tp_2 = 0 or 1) 且有無葫蘆(fh_2 == 0 or 1)
  int n2[5] = {0, 0, 0, 0, 0};
  p = 1;
  k = 1;
  int same_2;
  tp = 0;
  int fh_2 = 0;
  for(int i = 0; i < 4; i++){
    if(v2[i] != v2[i + 1]){
      if(k >= n2[p - 1]){
        n2[p] = k;
        same_2 = k;
        if(same_2 == 2)
          tp++;
      }
      p++;
      k = 1;
    }
    else
      k++;
    if(i == 3){
      if(k > n2[p - 1]){
        same_2 = k;
      }
      if((k == 2 && n2[p - 1] == 3) || (k == 3 && n2[p - 1] == 2))
        fh_2 = 1;
    }
  }
  int tp_2 = 0;
  if(tp == 2)
    tp_2 = 1;

  //A有無順子(st_1 = 0 or 1)
  int st_1 = 0;
  int tk = 0;
  for(int i = 0; i < 4; i++){
    if(v1[i] + 1 == v1[i + 1])
      tk++;
    if(tk == 4)
      st_1 = 1;
  }

  //A是否全同花(f_1 = 0 or 1)
  int f_1 = 0;
  int time = 0;
  for(int i = 0; i < 4; i++){
    if(s1[i] == s1[i + 1])
      time++;
    if(time == 4)
      f_1 = 1;
  }


  //A是否有同花順(stf_1 = 0 or 1)
  int stf_1 = 0;
  if(st_1 == 1 && f_1 == 1)
    stf_1 = 1;

  //B有無順子(st_2 = 0 or 1)
  int st_2 = 0;
  int ty = 0;
  for(int i = 0; i < 4; i++){
    if(v2[i] + 1 == v2[i + 1])
      ty++;
    if(ty == 4)
      st_2 = 1;
  }

  //B是否全同花(f_2 = 0 or 1)
  int f_2 = 0;
  int ti = 0;
  for(int i = 0; i < 4; i++){
    if(s2[i] == s2[i + 1])
      ti++;
    if(ti == 4)
      f_2 = 1;
  }


  //B是否有同花順(stf_2 = 0 or 1)
  int stf_2 = 0;
  if(st_2 == 1 && f_2 == 1)
    stf_2 = 1;

  //A是否有鐵支(fok_1 = 0 or 1)
  int fok_1 = 0;
  int tm = 0;
  for(int i = 0; i < 4; i++){
    if(v1[i] == v1[i + 1])
      tm++;
    if(tm == 3)
      fok_1 = 1;
  }

  //B是否有鐵支(fok_2 = 0 or 1)
  int fok_2 = 0;
  int te = 0;
  for(int i = 0; i < 4; i++){
    if(v2[i] == v2[i + 1])
      te++;
    if(te == 3)
      fok_2 = 1;
  }
  
  //判斷優先
  int r_A;
  if(stf_1 == 1)
    r_A = 8;
  else if(fok_1 == 1)
    r_A = 7;
  else if(fh_1 == 1)
    r_A = 6;
  else if(f_1 == 1)
    r_A = 5;
  else if(st_1 == 1)
    r_A = 4;
  else if(same_1 == 3)
    r_A = 3;
  else if(tp_1 == 1)
    r_A = 2;
  else if(same_1 == 2)
    r_A = 1;
  else
    r_A = 0;

  int r_B;
  if(stf_2 == 1)
    r_B = 8;
  else if(fok_2 == 1)
    r_B = 7;
  else if(fh_2 == 1)
    r_B = 6;
  else if(f_2== 1)
    r_B = 5;
  else if(st_2 == 1)
    r_B = 4;
  else if(same_2 == 3)
    r_B = 3;
  else if(tp_2 == 1)
    r_B = 2;
  else if(same_2 == 2)
    r_B = 1;
  else
    r_B = 0;

  if(r_A > r_B)
    printf("A");
  else if(r_A < r_B)
    printf("B");
  else if(r_A == r_B)
    printf("Draw");

  return 0;
}
