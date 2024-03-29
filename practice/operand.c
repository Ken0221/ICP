#include<stdio.h>

int main()
{
  int n1 = 0, n2 = 0;
  scanf("%d %d", &n1, &n2);
  int n3 = 0;

  int o1 = 0;
  scanf("%d", &o1);

  int n = 0, o = 0;
  int w = 0;
  
  switch(o1){
    case 0:
      n3 = n1 + n2;
      break;

    case 1:
      n3 = n1 - n2;
      break;

    case 2:
      n3 = n1 * n2;
      break;

    case 3:
      if(n2 == 0){
        printf("Denominator can't be zero!");
        w = 1;
      }
      else
        n3 = n1 / n2;
      break;

    case 4:
      n3 = n1 % n2;
      break;

    case 5:
      if(n1 == n2)
        n3 = 1;
      else
        n3 = 0;
      break;

    case 6:
      if(n1 != n2)
        n3 = 1;
      else
        n3 = 0;
      break;
      
    case 7:
      if(n1 <  n2)
        n3 = 1;
      else
        n3 = 0;
      break;

    case 8:
      if(n1 > n2)
        n3 = 1;
      else
        n3 = 0;
      break;

    case 9:
      if(n1 <= n2)
        n3 = 1;
      else
        n3 = 0;
      break;

    case 10:
      if(n1 >= n2)
        n3 = 1;
      else
        n3 = 0;
      break;

    default:
      printf("Invalid operator!");
      w = 1;
      break;
  }


  //其他
  int nt = 0;
  while(scanf("%d", &n) != EOF && w != 1){
    if(scanf("%d", &o) != EOF){
    switch(o){
      case 0:
        nt = n3 + n;
        break;

      case 1:
        nt = n3 - n;
        break;

      case 2:
        nt = n3 * n;
        break;

      case 3:
        if(n == 0){
          printf("Denominator can't be zero!");
          w = 1;
        }
        else
          nt = n3 / n;
        break;

      case 4:
        nt = n3 % n;
        break;

      case 5:
        if(n3 == n)
          nt = 1;
        else
          nt = 0;
        break;

      case 6:
        if(n3 != n)
          nt = 1;
        else
          nt = 0;
        break;
      
      case 7:
        if(n3 <  n)
          nt = 1;
        else
          nt = 0;
        break;

      case 8:
        if(n3 > n)
          nt = 1;
        else
          nt = 0;
        break;

      case 9:
        if(n3 <= n)
          nt = 1;
      else
          nt = 0;
        break;

      case 10:
        if(n3 >= n)
          nt = 1;
        else
          nt = 0;
        break;

      default:
        printf("Invalid operator!");
        w = 1;
        break;
    }
  }
  }
  if(w != 1)
    printf("%d", nt);

  return 0;
}
