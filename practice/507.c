#include <stdio.h>
#define ARRAY_SIZE 10
#define DETECTOR_ARRAY_SIZE 3
 
void ConvolutionLayer(int M[ARRAY_SIZE][ARRAY_SIZE], int D[DETECTOR_ARRAY_SIZE][DETECTOR_ARRAY_SIZE]) {
  int out[ARRAY_SIZE - 2][ARRAY_SIZE - 2] = {{0}};
  for(int i_M = 1, i_O = 0; i_M < ARRAY_SIZE - 1; i_M++, i_O++){
    for(int j_M = 1, j_O = 0; j_M < ARRAY_SIZE - 1; j_M++, j_O++){
      for(int i_D = 0, k = i_M - 1; i_D < 3; i_D++, k++){
        for(int j_D = 0, l = j_M - 1; j_D < 3; j_D++, l++){
          out[i_O][j_O] += M[k][l] * D[i_D][j_D];
        }
      }
      printf("%d ", out[i_O][j_O]);
    }
    printf("\n");
  }
  printf("\n");
}

void MaxPoolingLayer(int M[ARRAY_SIZE][ARRAY_SIZE], int p) {
  for(int i = 0; i < ARRAY_SIZE; i += p){
    for(int j = 0; j < ARRAY_SIZE; j += p){
      int max = M[i][j];
      int remain = ARRAY_SIZE % p;
      if(i == ARRAY_SIZE - remain && i == j && remain != 0){
        for(int k = i; k < i + remain; k++){
          for(int l = j; l < j + remain; l++){
            if(M[k][l] > max)
              max = M[k][l];
          }
        }
      }
      else if(i == ARRAY_SIZE - remain && remain != 0){
        for(int k = i; k < i + remain; k++){
          for(int l = j; l < j + p; l++){
            if(M[k][l] > max)
              max = M[k][l];
          }
        }
      }
      else if(j == ARRAY_SIZE - remain && remain != 0){
        for(int k = i; k < i + p; k++){
          for(int l = j; l < j + remain; l++){
            if(M[k][l] > max)
              max = M[k][l];
          }
        }
      }
      else
      for(int k = i; k < i + p; k++){
        for(int l = j; l < j + p; l++){
          if(M[k][l] > max)
            max = M[k][l];
        }
      }
      printf("%d ", max);
    }
    printf("\n");
  }
  printf("\n");
}

void FullyConnectedLayer(int M[ARRAY_SIZE][ARRAY_SIZE]) {
  for(int i = 0; i < ARRAY_SIZE; i++){
    for(int j = 0; j < ARRAY_SIZE; j++){
      printf("%d ", M[i][j]);
    }
  }  
}
/* 
int main() {        
  int pooling_size; 
  scanf("%d", &pooling_size);
  int array[ARRAY_SIZE][ARRAY_SIZE], detector_array[DETECTOR_ARRAY_SIZE][DETECTOR_ARRAY_SIZE];
  for (int i = 0; i < ARRAY_SIZE; i++)
    for (int j = 0; j < ARRAY_SIZE; j++)
      scanf("%d", &array[i][j]);
  for (int i = 0; i < DETECTOR_ARRAY_SIZE; i++)
    for (int j = 0; j < DETECTOR_ARRAY_SIZE; j++)
      scanf("%d", &detector_array[i][j]);
 
  ConvolutionLayer(array, detector_array);                                                                                              
  MaxPoolingLayer(array, pooling_size);
  FullyConnectedLayer(array);
 
  return 0;         
}*/
