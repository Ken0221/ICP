#include <stdio.h>
#include <string.h>
 
int changeTense(char* input){
  int sum = 0;



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
