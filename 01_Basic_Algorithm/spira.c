#include <stdio.h>

void spira(int n);

int main(void) {
  int n;
  printf("n = ");
  scanf("%d", &n);

  spira(n);
  return 0;
}

void spira(int n) {
  int i, j, k;
  for(i = 1; i <= n; i++) {
    for(k = 0; k < n-i; k++)
      putchar(' ');
    for(j = 1; j <= i*2-1; j++)
      putchar('*');
    putchar('\n');
  }
}
