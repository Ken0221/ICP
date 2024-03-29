#include<stdio.h>
 
int *GreatestValueIndex(int *array, int array_size) {
  int max = array[0];
  int valid = 0;
  int i_max = 0;
  while(valid == 0){
    valid = 1;
    for(int i = 0; i < array_size; i++){
      if(max < array[i]){
        max = array[i];
        valid = 0;
        i_max = i;
      }
    }
  }
  return &array[i_max];
}
/*
int main() {
  int array_size;
  scanf("%d", &array_size);
  int array[array_size];
  for (int num = 0; num < array_size; num++)
    scanf("%d", &(array[num]));
 
  int *iptr = GreatestValueIndex(array, array_size);
  printf("The index of the greatest value in the array is: %ld\n", iptr - array);                  
 
  return 0;
}*/
