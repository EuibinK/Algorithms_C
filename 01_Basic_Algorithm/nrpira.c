#include <stdio.h>

void nrpira(int n);

int main(void) {
  int n;
  printf("n = ");
  scanf("%d", &n);

  nrpira(n);
  return 0;
}

void nrpira(int n) {
  int i, j, k;
  for(i = 1; i <= n; i++) {
    for(j = 1; j < i; j++)
      putchar(' ');
    for(k = 1; k <= (n-i)*2+1; k++)
      printf("%d",i);
    putchar('\n');
  }
}
