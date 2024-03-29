#include <stdio.h>
#include <ctype.h>

int main() {
  int length, sum = 0;
  int alpha[26] = {0};
  int UpperLower[26] = {0};
  char temp_ch;
  int temp_int;
  int alpha_int, index;

  scanf("%d", &length);
  char input[length];
  getchar();
  for(int i = 0; i < length; i++) {
    scanf("%c", &input[i]);
  }
  for(int i = 0; i < length; i++) {
    if (isalpha(input[i])) {
      temp_ch = input[i];
      alpha_int = temp_ch;

      if(isupper(input[i])) {
        index = alpha_int % 65;
        alpha[index]++;
        if (alpha[index] == 1)  UpperLower[index] = 1;
      }
      else {
        index = alpha_int % 97;
        alpha[index]++;
      }
    }

    if (isdigit(input[i])) {
      temp_int = input[i];
      sum += (temp_int % 48);
    }
  }
  for(int j = 0; j < 26; j++) {
    if (alpha[j] != 0) {
      if (UpperLower[j] == 1) printf("%c", (j + 65));
      else printf("%c", (j + 97));
      
      printf("%d", alpha[j]);
    }
  }
  printf("%d\n", sum);
  return 0;
}
