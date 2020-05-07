#include <stdio.h>

int min3(int a, int b, int c, int d) {
  int min = a;
  if (b < min) min = b;
  if (c < min) min = c;
  if (d < min) min = d;

  return min;
}

int main(void) {
  int a, b, c, d;

  printf("a = "); scanf("%d", &a);
  printf("b = "); scanf("%d", &b);
  printf("c = "); scanf("%d", &c);
  printf("d = "); scanf("%d", &d);

  printf("min = %d\n", min3(a, b, c, d));
  
  return 0;
}
