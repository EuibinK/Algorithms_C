// prints * in n x n square shape
#include <stdio.h>

int main(void) {
  int n;
  printf("n = ");
  scanf("%d", &n);

  int i, j;
  for(i = 0; i < n; i++) {
    for(j = 0; j < n; j++)
      putchar('*');
    putchar('\n');
  }
  return 0;
}
