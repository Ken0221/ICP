#include<stdio.h>
#include<string.h>
#include<ctype.h>

void PrintLeet(char *input){
  int len = strlen(input);
  for(int i = 0; i < len; i++){
    input[i] = toupper(input[i]);
    /*if(input[i] >= 97 && input[i] <= 122)
      input[i] -= 32;*/
    switch(input[i]){
      case 'A':
        printf("4");
        break;

      case 'B':
        printf("8");
        break;

      case 'E':
        printf("3");
        break;

      case 'G':
        printf("6");
        break;

      case 'I':
        printf("1");
        break;

      case 'O':
        printf("0");
        break;

      case 'S':
        printf("5");
        break;

      case 'T':
        printf("7");
        break;

      case 'Z':
        printf("2");
        break;

      default:
        printf("%c", input[i]);
        break;
    }
  } 
}
/*
int main(){
  char input[1000];
  scanf("%s", input);
  PrintLeet(input);
  return 0;
}*/
