#include <stdio.h>
 
void calculate(int* aptr, int* ansptr){
  switch(aptr[2]){
    case 0:
      aptr[2] = aptr[0] + aptr[1];
      *ansptr = aptr[2];
      break;
    case 1:
      aptr[2] = aptr[0] - aptr[1];
      *ansptr = aptr[2];
      break;
    case 2:
      aptr[2] = aptr[0] * aptr[1];
      *ansptr = aptr[2];
      break;
    case 3:
      aptr[2] = aptr[0] / aptr[1];
      *ansptr = aptr[2];
      break;
    case 4:
      aptr[2] = aptr[0] % aptr[1];
      *ansptr = aptr[2];
      break;
    case 5:
      if(aptr[0] == aptr[1])
        aptr[2] = 1;
      else
        aptr[2] = 0;
      *ansptr = aptr[2];
      break;
    case 6:
      if(aptr[0] != aptr[1])
        aptr[2] = 1;  
      else
        aptr[2] = 0;
      *ansptr = aptr[2];
      break;
    case 7:
      if(aptr[0] < aptr[1])
        aptr[2] = 1;
      else
        aptr[2] = 0;
      *ansptr = aptr[2];
      break;
    case 8:
      if(aptr[0] > aptr[1])
        aptr[2] = 1;
      else
        aptr[2] = 0;
      *ansptr = aptr[2];
      break;
    case 9:
      if(aptr[0] <= aptr[1])
        aptr[2] = 1;
      else
        aptr[2] = 0;
      *ansptr = aptr[2];
      break;
    case 10:
      if(aptr[0] >= aptr[1])
        aptr[2] = 1;
      else
        aptr[2] = 0;
      *ansptr = aptr[2];
      break;
  }
}
/*
int main() {
  int a[50], ans = 0, count = 0;
  int *ansptr = &ans, *aptr = a;
  while(scanf("%d", &a[count]) != EOF)
    count++;
  for (int i = 0; i < count - 1; i += 2)
    calculate((aptr + i), ansptr);
  printf("Ans:%d", ans);
  return 0;
}*/
