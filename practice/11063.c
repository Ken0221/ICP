#include <stdio.h>
#include <stdbool.h>
#define MAZESIZE 100
 
/* inmaze */
bool inMaze (int row, int column, int n, int m)
{
  return (row >= 0 && row < n && column >= 0 && column < m);
}
 
/* print maze */
void print_maze (int maze[MAZESIZE][MAZESIZE], int n, int m) {
  printf("Best path:\n\n");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++)
      printf("%2d ", maze[i][j]);
    printf("\n");
  }
  printf("\n");
}
 
/* gomaze */
bool goMaze (int maze[MAZESIZE][MAZESIZE],
             int step, int currentRow,
             int currentColumn, 
             int endRow, int endColumn, 
             int n, int m, int tmin)
{
  int drow[4] = {1, 0, -1, 0};
  int dcolumn[4] = {0, 1, 0, -1};
  if ((currentRow == endRow) && (currentColumn == endColumn)) {
    return true;
  }
  for(int d = 0; d < 4; d++){
    int nearRow = currentRow + drow[d];
    int nearColumn = currentColumn + dcolumn[d];
    if(maze[nearRow][nearColumn] > 0 && maze[nearRow][nearColumn] < maze[currentRow][currentColumn] - 1)
      return false;

  }
  for (int d = 0; d < 4; d++) {
    int nextRow = currentRow + drow[d];
    int nextColumn = currentColumn + dcolumn[d];
    if (inMaze(nextRow, nextColumn, n, m) && maze[nextRow][nextColumn] == 0){
      maze[nextRow][nextColumn] = step;
      if (goMaze(maze, step + 1, nextRow, nextColumn, endRow, endColumn, n, m, tmin)) {
          return true;
      }
      maze[nextRow][nextColumn] = 0;
    }
  }
  return false;
}


/* main */
int main() {
  int n, m;
  scanf("%d%d", &n, &m);
  int maze[MAZESIZE][MAZESIZE];
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      scanf("%d", &(maze[i][j]));
  int startRow, startColumn;
  int endRow, endColumn;
  scanf("%d%d", &startRow, &startColumn);
  scanf("%d%d", &endRow, &endColumn);
  // print_maze(maze, n, m); // check initial maze
 
  maze[startRow][startColumn] = 1;
  int tmin = MAZESIZE * MAZESIZE;
  goMaze(maze, 2, startRow, startColumn, endRow, endColumn, n, m, tmin);
  print_maze(maze, n, m);
 
  return 0;
}
/* end */
