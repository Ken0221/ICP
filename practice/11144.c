#include <stdio.h>

int main(){
  int Customer_NUM;
  scanf("%d", &Customer_NUM);

  int Customers[Customer_NUM];
  for(int i = 0; i < Customer_NUM; i++)
    scanf("%d", &Customers[i]);

  int Checkout_NUM;
  scanf("%d", &Checkout_NUM);

  int Checkout[9] = {0};
  for(int i = 0; i < Customer_NUM; i++){
    int min = 999, index = 0;
    for(int j = 0; j < Checkout_NUM; j++){
      if(Checkout[j] < min){
        min = Checkout[j];
        index = j;
      }
    }
    Checkout[index] += Customers[i];
  }

  int max = 0;
  for(int i = 0; i < Checkout_NUM; i++)
    if(Checkout[i] > max)
      max = Checkout[i];
  printf("%d\n", max);
  return 0;
}
