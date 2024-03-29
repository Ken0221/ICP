#include <stdio.h>
#include "Find_Missing.h"

char Find_Missing(int N, char input[SIZE]) {
  for(int i = 0; i < N - 1; i++)
    if(input[i] < 97)
      input[i] += 32;
  
  for(int i = 0; i < N - 1; i++)
    for(int j = i; j < N - 1; j++)
      if(input[i] > input[j]){
        char temp = input[i];
        input[i] = input[j];
        input[j] = temp;
      }

  for(int i = 0; i < N - 1; i++)
    if(input[i] + 1 < input[i + 1] && i + 1 < N - 1)
      return input[i] + 1;

  return '0';
}
