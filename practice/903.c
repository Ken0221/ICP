#include <stdio.h>
#include <string.h>
 
void FullAdder(int *num1_bin, int *num2_bin, int *ans_bin, int * carry){
  
}
 
void Decimal2Binary(int num, int *num_bin) {
  int take = 1;
  for (int i = 0; i < 32; i++) {
    num_bin[i] = (num & take) ? 1 : 0;
    take <<= 1;
  }
}
 
int Binary2Decimal(int *num_bin) {
  int num = 0;
  for (int i = 0; i < 32; i++)
    num += (num_bin[i] << i);
  return num;
}
 
int main() {
  int num1, num2, carry = 0, carry_30;
  int num1_bin[32], num2_bin[32], ans_bin[32];
  scanf("%d%d", &num1, &num2);
  Decimal2Binary(num1, num1_bin);
  Decimal2Binary(num2, num2_bin);
 
  // Multiple Bits Adder
  for (int num = 0; num < 32; num++) {
    FullAdder(&(num1_bin[num]), &(num2_bin[num]), &(ans_bin[num]), &carry);
    if (num == 30)
      carry_30 = carry; 
  }
 
  // Overflow Detection 
  if (carry ^ carry_30)
    printf("Overflow!!\n");
  else
    printf("%d\n", Binary2Decimal(ans_bin));
 
  return 0;
}
