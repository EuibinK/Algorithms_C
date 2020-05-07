#include <stdio.h>

void triangleLB (int n);

int main(void) {
  int n;
  do {
    printf("# of lines = ");
    scanf("%d", &n);
  } while(n <= 0);

  triangleLB(n);
  return 0;
}

void triangleLB (int n) {
  int i, j;
  for(i = 1; i <= n; i++) {
    for(j = 1; j <= i; j++)
      putchar('*');
    putchar('\n');
  }
}
