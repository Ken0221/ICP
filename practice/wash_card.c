#include "wash_card.h"
 
void WashCard(int *card, int *card_n, int *card_26){
  for(int i = 0; i < CardSize / 2; i++){
    card[i] = card_n[i];
    card_n[i] = card_26[i];
  }
  int out[CardSize];
  for(int i = 0, j = 0; i < CardSize; i++, j++){
    if(i % 2 == 0){
      out[i] = card[j];
      j--;
    }
    else
      out[i] = card_n[j];
  }
  for(int i = 0; i < CardSize; i++){
    card_n[i] = out[i];
    card[i] = out[i];
  }
}

