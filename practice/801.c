#include <stdio.h>
#include <string.h>
 
int changeTense(char* input){
  int sum = 0;
  int valid = 1;
  int spacecount = 0;

  for(int i = 0; i < 1000; i++){
    valid = 1;
    if(input[i] == 'I' || input[i] == 'i'){
      for(int j = i; j < 1000 - i - 1; j++){
        if(input[j] == '.' || input[j] == ','){
          valid = 1;
          i = j;
          spacecount = 0;
          break;
        }
        if(input[j] == ' '){
          spacecount++;
        }
        if(input[j] == 'e' && input[j + 1] == 'd' && valid == 1 && spacecount == 1){
          valid = 0;
          sum++;
          if(input[j - 1] == 'i')
            input[j - 1] = 'y';
          for(int k = 1000 - i - 1; k > j; k--){
            input[k] = input[k - 1];
          }
          input[j] = 'i'; input[j + 1] = 'n'; input[j + 2] = 'g';
          for(int k = 1000 - i - 3; k > i + 2; k--){
            input[k] = input[k - 3];
          }
          input[i + 2] = 'a'; input[i + 3] = 'm'; input[i + 4] = ' ';
        }
      }
    }
    if((input[i] == 'H' || input[i] == 'h') && input[i + 1] == 'e'){
      for(int j = i; j < 1000 - i - 1; j++){
        if(input[j] == '.' || input[j] == ','){
          valid = 1;
          i = j;
          spacecount = 0;
          break;
        }
        if(input[j] == ' ')
          spacecount++;
        if(input[j] == 'e' && input[j + 1] == 'd' && valid == 1 && spacecount == 1){
          valid = 0;
          sum++;
          if(input[j - 1] == 'i')
            input[j - 1] = 'y';
          for(int k = 1000 - i - 1; k > j; k--)
            input[k] = input[k - 1];
          input[j] = 'i'; input[j + 1] = 'n'; input[j + 2] = 'g';
          for(int k = 1000 - i - 3; k > i + 2; k--){
            input[k] = input[k - 3];
          }
          input[i + 3] = 'i'; input[i + 4] = 's'; input[i + 5] = ' ';
        }
      }
    }
    if((input[i] == 'Y' || input[i] == 'y') && input[i + 1] == 'o' && input[i + 2] == 'u'){
      for(int j = i; j < 1000 - i - 1; j++){
        if(input[j] == '.' || input[j] == ','){
          valid = 1;
          i = j;
          spacecount = 0;
          break;
        }
        if(input[j] == ' ')
          spacecount++;
        if(input[j] == 'e' && input[j + 1] == 'd' && valid == 1 && spacecount == 1){
          valid = 0;
          sum++;
          if(input[j - 1] == 'i')
            input[j - 1] = 'y';
          for(int k = 1000 - i - 1; k > j; k--)
            input[k] = input[k - 1];
          input[j] = 'i'; input[j + 1] = 'n'; input[j + 2] = 'g';
          for(int k = 1000 - i - 4; k > i + 3; k--){
            input[k] = input[k - 4];
          }
          input[i + 4] = 'a'; input[i + 5] = 'r'; input[i + 6] = 'e'; input[i + 7] = ' ';
        }
      }
    }
  }
  for(int i = 0; i < 1000; i++){
    if(input[i] == '.'){
      if(input [i + 1] == '\0'){
        input[i + 2] = '\0';
      }
      input[i + 1] = '\n';
    }
  }
  printf("%s", input);
  return sum;
}

int main() {
 
  char str[1000];
  char word[40][100];
  int count = 0, word_len = 0;
  scanf("%s", word[count]);
  while( scanf("%s", word[++count]) != EOF ) {
    word_len = strlen(word[count-1]);
    word[count-1][word_len]=' ';
    word[count-1][word_len+1]='\0';
    if(count == 1)
      strcpy(str, word[count-1]);
    else
      strcat(str, word[count-1]);
  }
  if(count == 1) {
    strcpy(str, word[count-1]);
  }
  else {
    strcat(str, word[count-1]);
  }
 
  int c = changeTense(str); //function changeTense
 
  printf("%d tenses changed.", c);
  return 0;
}
