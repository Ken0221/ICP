#include<stdio.h>

int Operating_Sequence(int* Data) {
  int t = 10;
  int dif = 0;
  while(t > 1){
    for(int i = 0; i < t; i++){
      for(int j = i; j < t; j++){
        if(Data[i] > Data[j]){
          int temp = Data[i];
          Data[i] = Data[j];
          Data[j] = temp;
        }
      }
    }
    dif = Data[t - 1] - Data[0];
    Data[0] = dif;
    t--;
  }
  return dif;
}
/*
int main() {
  int Data[10] = {0};
  int Remain;
 
  for (int i = 0 ; i < 10 ; i++) {
    scanf("%d", &(Data[i]));
  }
 
  Remain = Operating_Sequence(Data);
 
  printf("Remain = %d\n", Remain);
 
  return 0;
}*/
