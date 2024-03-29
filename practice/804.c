#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define ALPHABET_NUMBER 5                                   

char GetHighestFrequencyAlphabet(char *ciphertext, int size){
  int a[26] = {0};
  int smax = 0;
  char max = ciphertext[0];
  char t[size];
  for(int i = 0; i < size; i++){
    t[i] = tolower(ciphertext[i]);
  }
  for(int i = 0; i < size; i++){
    int s = 0;
    for(int j = i; j < size; j++){
      if(t[i] == t[j] && isalnum(t[i]))
        s++;
    }
    if(s > smax){
      smax = s;
      max = t[i];
    }
  }
  return max;
}

void ShiftCipherText(char *ciphertext, char highest_frequency_alphabet, char alphabet, int size){
  int diff = highest_frequency_alphabet - alphabet;
  char t[size];
  for(int i = 0; i < size; i++){
    t[i] = ciphertext[i];
    int k = 0;
    if((islower(t[i]) && !(islower(t[i] - diff))) || (isupper(t[i]) && !(isupper(t[i] - diff))))
      k = 1;
    if(isalpha(t[i])){
      t[i] -= diff;
      if(!(isalpha(t[i])) || k == 1){
        if(diff > 0)
          t[i] += 26;
        else
          t[i] -= 26;
      }
    }
  }
  printf("%s\n", t);
}

/*
int main() {                          
  int size = 0;                       
  char ciphertext[10000], alphabet_array[ALPHABET_NUMBER] = {'e', 't', 'a', 'o', 'i'};                                                                 
  while(scanf("%c", &(ciphertext[size])) != EOF)
    size++;                           
  ciphertext[size] = '\0';          
 
  char highest_frequency_alphabet; 
  highest_frequency_alphabet = GetHighestFrequencyAlphabet(ciphertext, size);
  for (int num = 0; num < ALPHABET_NUMBER; num++)
    ShiftCipherText(ciphertext, highest_frequency_alphabet, alphabet_array[num], size);

  return 0;                           
}*/
