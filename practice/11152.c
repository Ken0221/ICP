#include <stdio.h>
#include <stdbool.h>

bool isLess(int num1[50], int num2[50], int len1, int len2) {
    if (len1 < len2) return true;
    if (len1 > len2) return false;

    for (int i = len1 - 1; i >= 0; --i) {
        if (num1[i] > num2[i]) return false;
        if (num1[i] < num2[i]) return true;
    }

    return false;
}

int main() {
  int num1[50] = {0};
  int num2[50] = {0};

  int len1;
  scanf("%d", &len1);
  for (int i = len1 - 1; i >= 0; --i) {
    scanf("%d", &num1[i]);
  }

  int len2;
  scanf("%d", &len2);
  for (int i = len2 - 1; i >= 0; --i) {
    scanf("%d", &num2[i]);
  }

  int operation;
  scanf("%d", &operation);

  if (operation == 1) {
    int carry = 0;
    int totalLength = len1 > len2 ? len1 : len2;
    int index = 0;

    for (; index < totalLength; ++index) {
      int sum = num1[index] + num2[index] + carry;
      carry = sum / 10;
      num1[index] = sum % 10;
    }

    if (carry != 0) {
      num1[index] = carry;
      index++;
    }

    for (int i = index - 1; i >= 0; --i) {
        printf("%d", num1[i]);
    }
  }
  else {
    bool negative = isLess(num1, num2, len1, len2);
    if (negative) {
        for (int i = 0; i < 50; ++i) {
            int swap = num1[i];
            num1[i] = num2[i];
            num2[i] = swap;
        }
        int swap = len1;
        len1 = len2;
        len2 = swap;
    }
    for (int i = 0; i < len2; ++i) {
        if (num1[i] - num2[i] >= 0) {
            num1[i] -= num2[i];
        }
        else {
            num1[i] -= num2[i];
            num1[i] += 10;
            num1[i + 1]--;
        }
    }
    while (num1[len1 - 1] == 0) len1--;
    if (negative) printf("-");
    for (int i = len1 - 1; i >= 0; --i) {
        printf("%d", num1[i]);
    }
    if (len1 == -1) printf("0");
  }
  return 0;
}
