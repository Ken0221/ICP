#include<stdio.h>

void InsertNode(int tree[], int value) {
  if(tree[0] == -1)
    tree[0] = value;
  else{
    int i = 0;
    int valid = 1;
    while(valid == 1){
      if(value > tree[i]){
        i = 2 * i + 2;
      }
      else if(value < tree[i]){
        i = 2 * i + 1;
      }
      if(tree[i] == -1){
        tree[i] = value;
        valid = 0;
      }
    }
  }
}

void SearchNode(int tree[], int value) {
  int valid = 1;
  int i = 0;
  while(valid == 1){
    if(value > tree[i] && tree[i] != -1){
      i = 2 * i + 2;
    }
    else if(value < tree[i] && tree[i] != -1){
      i = 2 * i + 1;
    }
    if(tree[i] == value){
      printf("Found in %d", i);
      valid = 0;
    }
    if(tree[i] == -1){
      printf("Not found until %d", i);
      valid = 0;
    }
  }
  printf("\n");
}

void PrintTree(int tree[]) {
  for(int i = 0; i < 100; i++){
    printf("%d ", tree[i]);
  }
  printf("\n");
}
/*
int main() {
  int operator, value;
  int tree[100];
  for (int num = 0; num < 100; num++)
    tree[num] = -1; 
  while (scanf("%d", &operator) != EOF) {
    switch(operator) {
      case 0:
        scanf("%d", &value);
        InsertNode(&tree[0], value);
        break;
      case 1:
        scanf("%d", &value);
        SearchNode(&tree[0], value);
        break;
      case 2:
        PrintTree(&tree[0]);
        break;
    }   
  }
  return 0;
}*/
