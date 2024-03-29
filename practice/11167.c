#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 5
 
typedef struct poker{
  char suit;
  char num[2];
  int number;
} Poker;
 
int alphaToInt(char *c) {
  if(c[0] == '1' && c[1] == '0')
    return 10;
  for(int i = 1; i < 10; i++){
    if(c[0] == 48 + i){
      return i;
    }
  }
  switch (c[0]){
    case 'A':
      return 1;
 
    case 'J':
      return 11;
 
    case 'Q':
      return 12;
 
    case 'K':
      return 13;
  }
}
 
int straightOrFlush(Poker *arr) {
  // char to number
  for (int i = 0; i < SIZE; i++) {
    arr[i].number = alphaToInt(arr[i].num);
  }
 
  for(int i = 0; i < SIZE; i++){
    for(int j = i; j < SIZE; j++){
      if(arr[i].number > arr[j].number){
        int t = arr[i].number;
        arr[i].number = arr[j].number;
        arr[j].number = t;
      }
    }
  }

  int valid = 1;
  int iss = 0;
  int isf = 0;
  int sumof9 = 0;
  if(arr[0].number == 1 && arr[SIZE - 1].number == 13 && arr[1].number != 2){
    for(int j = 0; j < SIZE - 1; j++){
      if(!(arr[j].number + 1 == arr[j + 1].number || arr[j + 1].number - arr[j].number == 9)){
        valid = 0;
        iss = 0;
        break;
      }
    }
  }
  else{
    for(int i = 0; i < SIZE - 1; i++){
      if(arr[i].number + 1 != arr[i + 1].number){
        valid = 0;
        iss = 0;
        break;
      }
    }
  }
  if(valid == 1)
    iss = 1;
 
  valid = 1;
  for(int i = 0; i < SIZE - 1; i++){
    if(arr[i].suit != arr[i + 1].suit){
      valid = 0;
      isf = 0;
      break;
    }
  }
  if(valid == 1)
    isf = 1;
 
  if(iss == 1 && isf == 0)
    return 1;
  else if(iss == 0 && isf == 1)
    return 2;
  else if(iss == 1 && isf == 1)
    return 3;
  else
    return 0;
}
/*
int main() {
  Poker input[5];
  int flag = 0;
  for (int i = 0; i < SIZE; i++) {
    scanf("%c %s\n", &input[i].suit, input[i].num);
  }
 
  flag = straightOrFlush(input);
 
  switch(flag) {
    case 0:
      printf("Nothing at all.\n");
      break;
    case 1:
      printf("Straight.\n");
      break;
    case 2:
      printf("Flush.\n");
      break;
    case 3:
      printf("Straight Flush.\n");
      break;
  }
  return 0;
}*/
