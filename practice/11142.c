#include <stdio.h>
#include <stdbool.h>
int main() {
  int height, width, squareLocationNum;
  int row, column;
  int largestSide_half;
  int matrix[40][40] = {0};
  scanf("%d%d%d", &height, &width, &squareLocationNum);
  // printf("%d %d %d\n", height, width, squareLocationNum);
  //getchar();
  for (int m = 0; m < height; m++) { 
    for (int n = 0; n < width; n++) {
      scanf("%d", &matrix[m][n]);
    }
  }
  for (int j = 0; j < squareLocationNum; j++){
    scanf("%d %d", &row, &column);
    largestSide_half = 0; // the length between center and side
    int center = matrix[row][column];
    int largestHeight = (row < (height-row-1)) ? row : height-row-1;
    int largestWidth = (column < (width-column-1)) ? column : width-column-1;
    int largestPossibleSide_half = (largestHeight < largestWidth) ? largestHeight : largestWidth;
    // check if there is x length of a side of square, x = k * 2 + 1
    bool isSquare;
    for (int k = 1; k <= largestPossibleSide_half; k++) {
      isSquare = true;
      for (int m = row-k; m <= row+k; m++){
        for (int n = column-k; n <= column+k; n++) {
          if (matrix[m][n] != center) {
            isSquare = false;
            break;
          }
        }
      }
      
      if (isSquare) {
        largestSide_half++;
      } 
      else {
        break;
      }
    }
    printf("%d\n", (largestSide_half*2+1));
  }
  return 0;
}
