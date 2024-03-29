#include <stdio.h>
#define CardSize 52
 
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
/*
int main()
{
  int Card[2][CardSize];
  int Step = 0;
  int n;
  for (int i = 0; i < CardSize; i++)//initialize
    Card[0][i] = i + 1;
 
  while (scanf("%d", &n) != EOF){
    while (n--){
      Step = !Step;
      if (Step)
        WashCard (Card[Step], Card[!Step], Card[!Step] + CardSize / 2);
      else
        WashCard (Card[Step], Card[!Step] + CardSize / 2, Card[!Step]);
    }
    for ( int i = 0 ; i < CardSize ; i++)
      printf ("%d ", Card[Step][i]);
    printf("\n");
  }
  return 0;
}*/
