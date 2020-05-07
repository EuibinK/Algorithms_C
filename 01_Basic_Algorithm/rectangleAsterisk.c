// prints * in n x m rectangle shape
#include <stdio.h>

int main(void) {
  int row, col;

  printf("row = ");
  scanf("%d", &row);

  printf("col = ");
  scanf("%d", &col);

  int i, j;

  for(i = 0; i < row; i++) {
    for(j = 0; j < col; j++)
      putchar('*');
    putchar('\n');
  }
  return 0;
}
