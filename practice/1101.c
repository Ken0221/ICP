#include <stdio.h>
#include <math.h>
typedef struct wallet{
  int thousand;
  int five_hundred;
  int hundred;
  int fifty;
  int ten;
  int five;
  int one;
} Wallet;

void Show(Wallet *input){
  printf("$1000:%d\n", input->thousand);
  printf("$500:%d\n", input->five_hundred);
  printf("$100:%d\n", input->hundred);
  printf("$50:%d\n", input->fifty);
  printf("$10:%d\n", input->ten);
  printf("$5:%d\n", input->five);
  printf("$1:%d\n", input->one);
}//show the money in this wallet.
void Purchase(Wallet *input, int choice){
  int cost = 0;
  switch(choice){
    case 1:
      cost = 49;
      break;
    case 2:
      cost = 48500;
      break;
    case 3:
      cost = 2410;
      break;
    case 4:
      cost = 167;
      break;
    case 5:
      cost = 1000;
      break;
  }
  int d = 0;
  int n = 0;
  int t = 1000 * input->thousand + 500 * input->five_hundred + 100 * input->hundred + 50 * input->fifty + 10 * input->ten + 5 * input->five + 1 * input->one;
  if(t < cost)
    printf("Not enough!\n");
  else{
    d = cost;
    d -= 1000 * input->thousand;
    input->thousand = 0;
    if(d <= 0){
      d *= -1;
      int n = 0;
  n = d / 1000;
  d -= n * 1000;
  input->thousand = n;
  n = d / 500;
  d -= n * 500;
  input->five_hundred += n;
  n = d / 100;
  d -= n * 100;
  input->hundred += n;
  n = d / 50;
  d -= n * 50;
  input->fifty += n;
  n = d / 10;
  d -= n * 10;
  input->ten += n;
  n = d / 5;
  d -= n * 5;
  input->five += n;
  n = d / 1;
  d -= n * 1;
  input->one += n;

    }
    else{
      d -= 500 * input->five_hundred;
      input->five_hundred = 0;
      if(d <= 0){
        d *= -1;
        int n = 0;
  n = d / 500;
  d -= n * 500;
  input->five_hundred = n;
  n = d / 100;
  d -= n * 100;
  input->hundred += n;
  n = d / 50;
  d -= n * 50;
  input->fifty += n;
  n = d / 10;
  d -= n * 10;
  input->ten += n;
  n = d / 5;
  d -= n * 5;
  input->five += n;
  n = d / 1;
  d -= n * 1;
  input->one += n;
      }
      else{
        d -= 100 * input->hundred;
      input->hundred = 0;
      if(d <= 0){
        d *= -1;
        int n = 0;
  n = d / 100;
  d -= n * 100;
  input->hundred = n;
  n = d / 50;
  d -= n * 50;
  input->fifty += n;
  n = d / 10;
  d -= n * 10;
  input->ten += n;
  n = d / 5;
  d -= n * 5;
  input->five += n;
  n = d / 1;
  d -= n * 1;
  input->one += n;
      }
      else{
        d -= 50 * input->fifty;
      input->fifty = 0;
      if(d <= 0){
        d *= -1;
        int n = 0;
  n = d / 50;
  d -= n * 50;
  input->fifty = n;
  n = d / 10;
  d -= n * 10;
  input->ten += n;
  n = d / 5;
  d -= n * 5;
  input->five += n;
  n = d / 1;
  d -= n * 1;
  input->one += n;
      }
      else{
        d -= 10 * input->ten;
      input->ten = 0;
      if(d <= 0){
        d *= -1;
        int n = 0;
  n = d / 10;
  d -= n * 10;
  input->ten = n;
  n = d / 5;
  d -= n * 5;
  input->five += n;
  n = d / 1;
  d -= n * 1;
  input->one += n;
      }
      else{
        d -= 5 * input->five;
      input->five = 0;
      if(d <= 0){
        d *= -1;
        int n = 0;
  n = d / 5;
  d -= n * 5;
  input->five = n;
  n = d / 1;
  d -= n * 1;
  input->one += n;
      }
      else{
        d -= 1 * input->one;
      input->one = 0;
      if(d <= 0){
        d *= -1;
        int n = 0;
  n = d / 1;
  d -= n * 1;
  input->one = n;
      }
      }
      }
      }
      }
      }
    }
  }
}//Buy the drink then change the money in the wallet.
void Change(Wallet *input){
  int d = 1000 * input->thousand + 500 * input->five_hundred + 100 * input->hundred + 50 * input->fifty + 10 * input->ten + 5 * input->five + 1 * input->one;
  int n = 0;  
  n = d / 1000;
  d -= n * 1000;
  input->thousand = n;
  n = d / 500;
  d -= n * 500;
  input->five_hundred = n;
  n = d / 100;
  d -= n * 100;
  input->hundred = n;
  n = d / 50;
  d -= n * 50;
  input->fifty = n;
  n = d / 10;
  d -= n * 10;
  input->ten = n;
  n = d / 5;
  d -= n * 5;
  input->five = n;
  n = d / 1;
  d -= n * 1;
  input->one = n;
}//change the money in the wallet into the bigger bills.
void Salary(Wallet *input, int salary){
  int d = salary;
  int n = 0;  
  n = d / 1000;
  d -= n * 1000;
  input->thousand += n;
  n = d / 500;
  d -= n * 500;
  input->five_hundred += n;
  n = d / 100;
  d -= n * 100;
  input->hundred += n;
  n = d / 50;
  d -= n * 50;
  input->fifty += n;
  n = d / 10;
  d -= n * 10;
  input->ten += n;
  n = d / 5;
  d -= n * 5;
  input->five += n;
  n = d / 1;
  d -= n * 1;
  input->one += n;
}//earn the salary and put it into the wallet.
/*
int main() {
  int input, operation, drink, salary;
  scanf("%d", &input);
  Wallet my_wallet = {0, 0, 0, 0, 0, 0, input};
  Wallet *ptr = &my_wallet;
  while(scanf("%d", &operation) != EOF) {
    switch(operation) {
    case 1:
      Show(ptr);
      break;
    case 2:
      scanf("%d", &drink);
      Purchase(ptr, drink);
      break;
    case 3:
      Change(ptr);
      break;
    case 4:
      scanf("%d", &salary);
      Salary(ptr, salary);
      break;
    default:
      break;
    }
  }
}*/
